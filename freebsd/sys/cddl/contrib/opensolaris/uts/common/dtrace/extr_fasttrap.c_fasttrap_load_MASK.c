
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ulong_t ;
typedef int fasttrap_bucket_t ;
struct TYPE_12__ {int fth_nent; int fth_mask; TYPE_2__* fth_table; } ;
struct TYPE_11__ {int fth_nent; int fth_mask; TYPE_3__* fth_table; } ;
struct TYPE_10__ {int fth_nent; int fth_mask; TYPE_1__* fth_table; } ;
struct TYPE_9__ {int ftb_mtx; } ;
struct TYPE_8__ {int ftb_mtx; } ;
struct TYPE_7__ {int ftb_mtx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int ,int ,int ,char*,int) ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_5 (char*,int *,int *,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (int) ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_6__ VAR_27 ;
 TYPE_5__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 TYPE_4__ VAR_33 ;
 int FUNC_7 (TYPE_3__*,int) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *,int *,int ,int ,char*) ;
 int FUNC_10 (int *,int ,int ,int ,int,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int ,int *) ;
 int FUNC_15 (int *,char*) ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static int
FUNC_16(void)
{
 ulong_t VAR_36;
 int VAR_37, VAR_38;


        VAR_16 = FUNC_10(&VAR_17, 0, VAR_11, VAR_7, 0600,
            "dtrace/fasttrap");

 FUNC_12(&VAR_18, "fasttrap clean", "dtrace", VAR_9);
 FUNC_14(&VAR_20, "fasttrap count mtx", VAR_10,
     ((void*)0));





 VAR_31 = 0;
 VAR_36 = VAR_35;


 if (VAR_36 == 0 || VAR_36 > 0x1000000)
  VAR_36 = VAR_6;

 VAR_35 = VAR_36;

 if (FUNC_2(VAR_36))
  VAR_33.fth_nent = VAR_36;
 else
  VAR_33.fth_nent = 1 << FUNC_6(VAR_36);
 FUNC_0(VAR_33.fth_nent > 0);
 VAR_33.fth_mask = VAR_33.fth_nent - 1;
 VAR_33.fth_table = FUNC_8(VAR_33.fth_nent *
     sizeof (fasttrap_bucket_t), VAR_8);

 for (VAR_37 = 0; VAR_37 < VAR_33.fth_nent; VAR_37++)
  FUNC_14(&VAR_33.fth_table[VAR_37].ftb_mtx,
      "tracepoints bucket mtx", VAR_10, ((void*)0));





 VAR_36 = VAR_5;
 if (FUNC_2(VAR_36))
  VAR_28.fth_nent = VAR_36;
 else
  VAR_28.fth_nent = 1 << FUNC_6(VAR_36);
 FUNC_0(VAR_28.fth_nent > 0);
 VAR_28.fth_mask = VAR_28.fth_nent - 1;
 VAR_28.fth_table = FUNC_8(VAR_28.fth_nent *
     sizeof (fasttrap_bucket_t), VAR_8);

 for (VAR_37 = 0; VAR_37 < VAR_28.fth_nent; VAR_37++)
  FUNC_14(&VAR_28.fth_table[VAR_37].ftb_mtx,
      "providers bucket mtx", VAR_10, ((void*)0));


 VAR_38 = FUNC_9(VAR_26, ((void*)0),
     &VAR_19, 0, 0, "ftcleanup");
 if (VAR_38 != 0) {
  FUNC_4(VAR_16);

  for (VAR_37 = 0; VAR_37 < VAR_28.fth_nent; VAR_37++)
   FUNC_13(&VAR_28.fth_table[VAR_37].ftb_mtx);
  for (VAR_37 = 0; VAR_37 < VAR_33.fth_nent; VAR_37++)
   FUNC_13(&VAR_33.fth_table[VAR_37].ftb_mtx);

  FUNC_7(VAR_28.fth_table, VAR_28.fth_nent *
      sizeof (fasttrap_bucket_t));
  FUNC_11(&VAR_18);
  FUNC_13(&VAR_20);
  return (VAR_38);
 }





 VAR_36 = VAR_4;
 if (FUNC_2(VAR_36))
  VAR_27.fth_nent = VAR_36;
 else
  VAR_27.fth_nent = 1 << FUNC_6(VAR_36);
 FUNC_0(VAR_27.fth_nent > 0);
 VAR_27.fth_mask = VAR_27.fth_nent - 1;
 VAR_27.fth_table = FUNC_8(VAR_27.fth_nent *
     sizeof (fasttrap_bucket_t), VAR_8);

 for (VAR_37 = 0; VAR_37 < VAR_27.fth_nent; VAR_37++)
  FUNC_14(&VAR_27.fth_table[VAR_37].ftb_mtx,
      "processes bucket mtx", VAR_10, ((void*)0));

 FUNC_15(&VAR_32, "fasttrap tracepoint");





 VAR_30 = FUNC_1(VAR_34,
     VAR_29, ((void*)0), VAR_2);





 VAR_15 = &VAR_22;
 VAR_14 = &VAR_21;
 VAR_13 = &VAR_21;

 (void) FUNC_5("fasttrap", &VAR_25, ((void*)0),
     &VAR_24);

 return (0);
}
