
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int rm_mtx; int rm_list; int rm_descr; } ;
struct resource {int dummy; } ;
struct resource_i {int r_end; int r_start; int r_flags; struct resource r_r; int * r_sharehead; struct rman* r_rm; int * r_dev; } ;
typedef int rman_res_t ;
typedef int * device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct resource_i*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int) ;
 struct resource_i* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct resource_i*,struct resource_i*,int ) ;
 int FUNC_8 (struct resource_i*,struct resource_i*,int ) ;
 struct resource_i* FUNC_9 (struct resource_i*,int ) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (struct resource_i*,int ) ;
 struct resource_i* FUNC_12 (int) ;
 int * FUNC_13 (int,int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int,int) ;

struct resource *
FUNC_18(struct rman *VAR_9, rman_res_t VAR_10, rman_res_t VAR_11,
       rman_res_t VAR_12, rman_res_t VAR_13, u_int VAR_14,
       device_t VAR_15)
{
 u_int VAR_16;
 struct resource_i *VAR_17, *VAR_18, *VAR_19;
 rman_res_t VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_19 = ((void*)0);

 FUNC_0(("rman_reserve_resource_bound: <%s> request: [%#jx, %#jx], "
        "length %#jx, flags %x, device %s\n", VAR_9->rm_descr, VAR_10, VAR_11,
        VAR_12, VAR_14,
        VAR_15 == ((void*)0) ? "<null>" : FUNC_10(VAR_15)));
 FUNC_1((VAR_14 & VAR_4) == 0,
     ("invalid flags %#x", VAR_14));
 VAR_16 = (VAR_14 & ~VAR_4) | VAR_3;

 FUNC_14(VAR_9->rm_mtx);

 VAR_17 = FUNC_6(&VAR_9->rm_list);
 if (VAR_17 == ((void*)0)) {
     FUNC_0(("NULL list head\n"));
 } else {
     FUNC_0(("rman_reserve_resource_bound: trying %#jx <%#jx,%#jx>\n",
      VAR_17->r_end, VAR_10, VAR_12-1));
 }
 for (VAR_17 = FUNC_6(&VAR_9->rm_list);
      VAR_17 && VAR_17->r_end < VAR_10 + VAR_12 - 1;
      VAR_17 = FUNC_9(VAR_17, VAR_7)) {
  ;
  FUNC_0(("rman_reserve_resource_bound: tried %#jx <%#jx,%#jx>\n",
   VAR_17->r_end, VAR_10, VAR_12-1));
 }

 if (VAR_17 == ((void*)0)) {
  FUNC_0(("could not find a region\n"));
  goto out;
 }

 VAR_22 = (1ull << FUNC_4(VAR_14)) - 1;
 FUNC_1(VAR_10 <= VAR_6 - VAR_22,
     ("start (%#jx) + amask (%#jx) would wrap around", VAR_10, VAR_22));


 VAR_23 = ~(VAR_13 - 1);



 for (VAR_18 = VAR_17; VAR_18; VAR_18 = FUNC_9(VAR_18, VAR_7)) {
  FUNC_0(("considering [%#jx, %#jx]\n", VAR_18->r_start, VAR_18->r_end));




  if (VAR_18->r_start > VAR_11 - (VAR_12 - 1)) {
   FUNC_0(("s->r_start (%#jx) + count - 1> end (%#jx)\n",
       VAR_18->r_start, VAR_11));
   break;
  }
  if (VAR_18->r_start > VAR_6 - VAR_22) {
   FUNC_0(("s->r_start (%#jx) + amask (%#jx) too large\n",
       VAR_18->r_start, VAR_22));
   break;
  }
  if (VAR_18->r_flags & VAR_3) {
   FUNC_0(("region is allocated\n"));
   continue;
  }
  VAR_20 = FUNC_16(VAR_18->r_start, VAR_10);





  do {
   VAR_20 = (VAR_20 + VAR_22) & ~VAR_22;
   if (((VAR_20 ^ (VAR_20 + VAR_12 - 1)) & VAR_23) != 0)
    VAR_20 += VAR_13 - (VAR_20 & ~VAR_23);
  } while ((VAR_20 & VAR_22) != 0 && VAR_20 < VAR_11 &&
      VAR_20 < VAR_18->r_end);
  VAR_21 = FUNC_17(VAR_18->r_end, FUNC_16(VAR_20 + VAR_12 - 1, VAR_11));
  if (VAR_20 > VAR_21) {
   FUNC_0(("adjusted start exceeds end\n"));
   continue;
  }
  FUNC_0(("truncated region: [%#jx, %#jx]; size %#jx (requested %#jx)\n",
         VAR_20, VAR_21, (VAR_21 - VAR_20 + 1), VAR_12));

  if ((VAR_21 - VAR_20 + 1) >= VAR_12) {
   FUNC_0(("candidate region: [%#jx, %#jx], size %#jx\n",
          VAR_20, VAR_21, (VAR_21 - VAR_20 + 1)));
   if ((VAR_18->r_end - VAR_18->r_start + 1) == VAR_12) {
    FUNC_0(("candidate region is entire chunk\n"));
    VAR_19 = VAR_18;
    VAR_19->r_flags = VAR_16;
    VAR_19->r_dev = VAR_15;
    goto out;
   }
   VAR_19 = FUNC_12(VAR_0);
   if (VAR_19 == ((void*)0))
    goto out;
   VAR_19->r_start = VAR_20;
   VAR_19->r_end = VAR_20 + VAR_12 - 1;
   VAR_19->r_flags = VAR_16;
   VAR_19->r_dev = VAR_15;
   VAR_19->r_rm = VAR_9;

   if (VAR_18->r_start < VAR_19->r_start && VAR_18->r_end > VAR_19->r_end) {
    FUNC_0(("splitting region in three parts: "
           "[%#jx, %#jx]; [%#jx, %#jx]; [%#jx, %#jx]\n",
           VAR_18->r_start, VAR_19->r_start - 1,
           VAR_19->r_start, VAR_19->r_end,
           VAR_19->r_end + 1, VAR_18->r_end));



    VAR_17 = FUNC_12(VAR_0);
    if (VAR_17 == ((void*)0)) {
     FUNC_11(VAR_19, VAR_1);
     VAR_19 = ((void*)0);
     goto out;
    }
    VAR_17->r_start = VAR_19->r_end + 1;
    VAR_17->r_end = VAR_18->r_end;
    VAR_17->r_flags = VAR_18->r_flags;
    VAR_17->r_rm = VAR_9;
    VAR_18->r_end = VAR_19->r_start - 1;
    FUNC_7(&VAR_9->rm_list, VAR_18, VAR_19,
           VAR_7);
    FUNC_7(&VAR_9->rm_list, VAR_19, VAR_17,
           VAR_7);
   } else if (VAR_18->r_start == VAR_19->r_start) {
    FUNC_0(("allocating from the beginning\n"));



    VAR_18->r_start = VAR_19->r_end + 1;
    FUNC_8(VAR_18, VAR_19, VAR_7);
   } else {
    FUNC_0(("allocating at the end\n"));



    VAR_18->r_end = VAR_19->r_start - 1;
    FUNC_7(&VAR_9->rm_list, VAR_18, VAR_19,
           VAR_7);
   }
   goto out;
  }
 }
 FUNC_0(("no unshared regions found\n"));
 if ((VAR_14 & VAR_5) == 0)
  goto out;

 for (VAR_18 = VAR_17; VAR_18 && VAR_18->r_end <= VAR_11; VAR_18 = FUNC_9(VAR_18, VAR_7)) {
  if (FUNC_5(VAR_18->r_flags) == FUNC_5(VAR_14) &&
      VAR_18->r_start >= VAR_10 &&
      (VAR_18->r_end - VAR_18->r_start + 1) == VAR_12 &&
      (VAR_18->r_start & VAR_22) == 0 &&
      ((VAR_18->r_start ^ VAR_18->r_end) & VAR_23) == 0) {
   VAR_19 = FUNC_12(VAR_0);
   if (VAR_19 == ((void*)0))
    goto out;
   VAR_19->r_start = VAR_18->r_start;
   VAR_19->r_end = VAR_18->r_end;
   VAR_19->r_flags = VAR_16;
   VAR_19->r_dev = VAR_15;
   VAR_19->r_rm = VAR_9;
   if (VAR_18->r_sharehead == ((void*)0)) {
    VAR_18->r_sharehead = FUNC_13(sizeof *VAR_18->r_sharehead,
      VAR_1, VAR_0 | VAR_2);
    if (VAR_18->r_sharehead == ((void*)0)) {
     FUNC_11(VAR_19, VAR_1);
     VAR_19 = ((void*)0);
     goto out;
    }
    FUNC_2(VAR_18->r_sharehead);
    FUNC_3(VAR_18->r_sharehead, VAR_18,
       VAR_8);
    VAR_18->r_flags |= VAR_4;
   }
   VAR_19->r_sharehead = VAR_18->r_sharehead;
   FUNC_3(VAR_18->r_sharehead, VAR_19, VAR_8);
   goto out;
  }
 }




out:
 FUNC_15(VAR_9->rm_mtx);
 return (VAR_19 == ((void*)0) ? ((void*)0) : &VAR_19->r_r);
}
