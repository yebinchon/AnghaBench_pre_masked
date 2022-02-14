
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {int bd_freebuffers; int bd_hifreebuffers; int bd_lofreebuffers; int bd_maxbufspace; int bd_hibufspace; int bd_lobufspace; int bd_bufspacethresh; int bd_hidirtybuffers; int bd_lodirtybuffers; int bd_dirtybufthresh; int bd_lim; scalar_t__ bd_numdirtybuffers; scalar_t__ bd_bufspace; } ;
struct buf {int b_domain; int b_dep; scalar_t__ b_kvabase; scalar_t__ b_data; scalar_t__ b_xflags; scalar_t__ b_subqueue; int b_qindex; void* b_wcred; void* b_rcred; int b_flags; } ;
typedef scalar_t__ caddr_t ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buf*) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct bufdomain*) ;
 int VAR_10 ;
 int VAR_11 ;
 struct bufdomain* VAR_12 ;
 int FUNC_5 (int *,int ,int,char*) ;
 int FUNC_6 (int *,struct buf*,int) ;
 int VAR_13 ;
 struct buf* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (struct buf*,int) ;
 void* FUNC_8 (int ) ;
 int VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 void* VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int FUNC_13 (int *,char*,int *,int ) ;
 int VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (char*,int,int *,int *,int *,int *,int ,int ,int *,int ) ;
 scalar_t__ VAR_47 ;
 int FUNC_16 (int ,int ) ;

void
FUNC_17(void)
{
 struct buf *VAR_48;
 int VAR_49;

 FUNC_1(VAR_37 >= VAR_3,
     ("maxbcachebuf (%d) must be >= MAXBSIZE (%d)\n", VAR_37,
     VAR_3));
 FUNC_5(&VAR_13, VAR_8, -1, "bufq empty lock");
 FUNC_13(&VAR_46, "runningbufspace lock", ((void*)0), VAR_5);
 FUNC_13(&VAR_11, "buffer daemon lock", ((void*)0), VAR_5);
 FUNC_13(&VAR_10, "dirty buf lock", ((void*)0), VAR_5);

 VAR_47 = (caddr_t)FUNC_10(VAR_4);


 for (VAR_49 = 0; VAR_49 < VAR_42; VAR_49++) {
  VAR_48 = &VAR_14[VAR_49];
  FUNC_7(VAR_48, sizeof *VAR_48);
  VAR_48->b_flags = VAR_2;
  VAR_48->b_rcred = VAR_7;
  VAR_48->b_wcred = VAR_7;
  VAR_48->b_qindex = VAR_9;
  VAR_48->b_domain = -1;
  VAR_48->b_subqueue = VAR_40 + 1;
  VAR_48->b_xflags = 0;
  VAR_48->b_data = VAR_48->b_kvabase = VAR_47;
  FUNC_2(&VAR_48->b_dep);
  FUNC_0(VAR_48);
  FUNC_6(&VAR_13, VAR_48, 0);
 }
 VAR_39 = (long)VAR_42 * VAR_0;
 VAR_28 = FUNC_11(3 * VAR_39 / 4, VAR_39 - VAR_37 * 10);
 VAR_32 = (VAR_28 / 20) * 19;
 VAR_24 = VAR_32 + (VAR_28 - VAR_32) / 2;
 VAR_31 = FUNC_11(FUNC_12(FUNC_14(VAR_28 / 64, VAR_37),
     16 * 1024 * 1024), 1024 * 1024);
 VAR_35 = FUNC_14((VAR_31 * 2) / 3, VAR_37);
 VAR_38 = VAR_28 / 20;





 VAR_29 = VAR_42 / 4 + 20;
 VAR_25 = VAR_29 * 9 / 10;






 while ((long)VAR_29 * VAR_0 > 3 * VAR_28 / 4) {
  VAR_29 >>= 1;
 }
 VAR_33 = VAR_29 / 2;
 VAR_34 = FUNC_3((VAR_42 / 25) + (20 * VAR_41), 128 * VAR_41);
 VAR_30 = (3 * VAR_34) / 2;
 VAR_45 = VAR_42;


 FUNC_16(VAR_20, VAR_22);
 VAR_18 = FUNC_15("buf free cache", sizeof(struct buf),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_16, VAR_17, ((void*)0), 0);






 VAR_15 = FUNC_3(FUNC_9(VAR_39, 256*1024*1024), VAR_1);
 for (VAR_49 = 0 ; VAR_49 < VAR_15; VAR_49++) {
  struct bufdomain *VAR_50;

  VAR_50 = &VAR_12[VAR_49];
  FUNC_4(VAR_50);
  VAR_50->bd_freebuffers = VAR_42 / VAR_15;
  VAR_50->bd_hifreebuffers = VAR_30 / VAR_15;
  VAR_50->bd_lofreebuffers = VAR_34 / VAR_15;
  VAR_50->bd_bufspace = 0;
  VAR_50->bd_maxbufspace = VAR_39 / VAR_15;
  VAR_50->bd_hibufspace = VAR_28 / VAR_15;
  VAR_50->bd_lobufspace = VAR_32 / VAR_15;
  VAR_50->bd_bufspacethresh = VAR_24 / VAR_15;
  VAR_50->bd_numdirtybuffers = 0;
  VAR_50->bd_hidirtybuffers = VAR_29 / VAR_15;
  VAR_50->bd_lodirtybuffers = VAR_33 / VAR_15;
  VAR_50->bd_dirtybufthresh = VAR_25 / VAR_15;

  VAR_50->bd_lim = VAR_42 / VAR_15 / 50 / VAR_41;
 }
 VAR_26 = FUNC_8(VAR_6);
 VAR_27 = FUNC_8(VAR_6);
 VAR_36 = FUNC_8(VAR_6);
 VAR_44 = FUNC_8(VAR_6);
 VAR_43 = FUNC_8(VAR_6);
 VAR_21 = FUNC_8(VAR_6);
 VAR_19 = FUNC_8(VAR_6);
 VAR_23 = FUNC_8(VAR_6);
}
