
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* b_buf; } ;
struct bufarea {TYPE_1__ b_un; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ fs_bsize; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bufarea*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct bufarea VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct bufarea*,int ) ;
 long VAR_9 ;
 struct bufarea* VAR_10 ;
 struct bufarea* VAR_11 ;
 scalar_t__* VAR_12 ;
 TYPE_4__* VAR_13 ;
 TYPE_3__ VAR_14 ;
 scalar_t__* VAR_15 ;
 TYPE_2__* VAR_16 ;

void
FUNC_5(void)
{
 struct bufarea *VAR_17;
 long VAR_18, VAR_19;
 char *VAR_20;

 VAR_10 = VAR_11 = (struct bufarea *)0;
 VAR_20 = FUNC_0((unsigned int)VAR_14.fs_bsize);
 if (VAR_20 == ((void*)0))
  FUNC_3(VAR_3, "cannot allocate buffer pool");
 VAR_8.b_un.b_buf = VAR_20;
 FUNC_4(&VAR_8, VAR_0);
 FUNC_1(&VAR_7);
 VAR_18 = VAR_4;
 if (VAR_18 < VAR_5)
  VAR_18 = VAR_5;
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_17 = (struct bufarea *)FUNC_0(sizeof(struct bufarea));
  VAR_20 = FUNC_0((unsigned int)VAR_14.fs_bsize);
  if (VAR_17 == ((void*)0) || VAR_20 == ((void*)0)) {
   if (VAR_19 >= VAR_5)
    break;
   FUNC_3(VAR_3, "cannot allocate buffer pool");
  }
  VAR_17->b_un.b_buf = VAR_20;
  FUNC_2(&VAR_7, VAR_17, VAR_6);
  FUNC_4(VAR_17, VAR_2);
 }
 VAR_9 = VAR_19;
 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
  VAR_13[VAR_19].tv_sec = VAR_16[VAR_19].tv_sec = 0;
  VAR_13[VAR_19].tv_nsec = VAR_16[VAR_19].tv_nsec = 0;
  VAR_12[VAR_19] = VAR_15[VAR_19] = 0;
 }
}
