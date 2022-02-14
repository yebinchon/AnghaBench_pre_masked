
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct thread {scalar_t__* td_retval; TYPE_1__* td_proc; } ;
struct filedesc {int fd_lastfile; } ;
typedef int sbintime_t ;
typedef int fd_set ;
typedef int fd_mask ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int) ;
 int * FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *,int,int,int) ;
 int FUNC_9 (struct thread*,int **,int **) ;
 int FUNC_10 (struct thread*,int **,int **,int) ;
 int FUNC_11 (struct thread*) ;
 int FUNC_12 (struct thread*) ;
 int FUNC_13 (struct thread*,int,int) ;
 int FUNC_14 (int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (struct timeval*) ;
 int FUNC_16 (struct timeval) ;

int
FUNC_17(struct thread *VAR_12, int VAR_13, fd_set *VAR_14, fd_set *VAR_15,
    fd_set *VAR_16, struct timeval *VAR_17, int VAR_18)
{
 struct filedesc *VAR_19;






 fd_mask VAR_20[FUNC_4(2048, VAR_8)];
 fd_mask *VAR_21[3], *VAR_22[3], *VAR_23, *VAR_24;
 struct timeval VAR_25;
 sbintime_t VAR_26, VAR_27, VAR_28;
 u_int VAR_29, VAR_30, VAR_31, VAR_32;
 int VAR_33, VAR_34, VAR_35;

 if (VAR_13 < 0)
  return (VAR_1);
 VAR_19 = VAR_12->td_proc->p_fd;
 VAR_35 = VAR_13;
 VAR_34 = VAR_19->fd_lastfile;
 if (VAR_13 > VAR_34 + 1)
  VAR_13 = VAR_34 + 1;

 VAR_33 = FUNC_8(VAR_14, VAR_13, VAR_35, VAR_18);
 if (VAR_33 != 0)
  return (VAR_33);
 VAR_33 = FUNC_8(VAR_15, VAR_13, VAR_35, VAR_18);
 if (VAR_33 != 0)
  return (VAR_33);
 VAR_33 = FUNC_8(VAR_16, VAR_13, VAR_35, VAR_18);
 if (VAR_33 != 0)
  return (VAR_33);





 VAR_32 = FUNC_7(VAR_13, VAR_8);
 VAR_30 = VAR_32 / VAR_7;
 VAR_31 = FUNC_7(VAR_13, VAR_18) / VAR_7;
 VAR_29 = 0;
 if (VAR_14 != ((void*)0))
  VAR_29 += 2 * VAR_30;
 if (VAR_15 != ((void*)0))
  VAR_29 += 2 * VAR_30;
 if (VAR_16 != ((void*)0))
  VAR_29 += 2 * VAR_30;
 if (VAR_29 <= sizeof VAR_20)
  VAR_23 = &VAR_20[0];
 else
  VAR_23 = FUNC_5(VAR_29, VAR_5, VAR_6);






 VAR_24 = VAR_23;
 do { if (VAR_14 == ((void*)0)) { VAR_21[0] = ((void*)0); VAR_22[0] = ((void*)0); } else { VAR_21[0] = VAR_24 + VAR_29 / 2 / sizeof *VAR_24; VAR_22[0] = VAR_24; VAR_24 += VAR_30 / sizeof *VAR_24; VAR_33 = FUNC_0(VAR_14, VAR_21[0], VAR_31); if (VAR_33 != 0) goto done; if (VAR_30 != VAR_31) FUNC_1((char *)VAR_21[0] + VAR_31, VAR_30 - VAR_31); } } while (0);
 do { if (VAR_15 == ((void*)0)) { VAR_21[1] = ((void*)0); VAR_22[1] = ((void*)0); } else { VAR_21[1] = VAR_24 + VAR_29 / 2 / sizeof *VAR_24; VAR_22[1] = VAR_24; VAR_24 += VAR_30 / sizeof *VAR_24; VAR_33 = FUNC_0(VAR_15, VAR_21[1], VAR_31); if (VAR_33 != 0) goto done; if (VAR_30 != VAR_31) FUNC_1((char *)VAR_21[1] + VAR_31, VAR_30 - VAR_31); } } while (0);
 do { if (VAR_16 == ((void*)0)) { VAR_21[2] = ((void*)0); VAR_22[2] = ((void*)0); } else { VAR_21[2] = VAR_24 + VAR_29 / 2 / sizeof *VAR_24; VAR_22[2] = VAR_24; VAR_24 += VAR_30 / sizeof *VAR_24; VAR_33 = FUNC_0(VAR_16, VAR_21[2], VAR_31); if (VAR_33 != 0) goto done; if (VAR_30 != VAR_31) FUNC_1((char *)VAR_21[2] + VAR_31, VAR_30 - VAR_31); } } while (0);
 if (VAR_18 != VAR_8 && VAR_21[0] != ((void*)0)) { int VAR_36; for (VAR_36 = 0; VAR_36 < VAR_30 / sizeof *VAR_24; VAR_36++) VAR_21[0][VAR_36] = (VAR_21[0][VAR_36] >> 32) | (VAR_21[0][VAR_36] << 32); };
 if (VAR_18 != VAR_8 && VAR_21[1] != ((void*)0)) { int VAR_37; for (VAR_37 = 0; VAR_37 < VAR_30 / sizeof *VAR_24; VAR_37++) VAR_21[1][VAR_37] = (VAR_21[1][VAR_37] >> 32) | (VAR_21[1][VAR_37] << 32); };
 if (VAR_18 != VAR_8 && VAR_21[2] != ((void*)0)) { int VAR_38; for (VAR_38 = 0; VAR_38 < VAR_30 / sizeof *VAR_24; VAR_38++) VAR_21[2][VAR_38] = (VAR_21[2][VAR_38] >> 32) | (VAR_21[2][VAR_38] << 32); };

 if (VAR_29 != 0)
  FUNC_1(VAR_23, VAR_29 / 2);

 VAR_27 = 0;
 if (VAR_17 != ((void*)0)) {
  VAR_25 = *VAR_17;
  if (VAR_25.tv_sec < 0 || VAR_25.tv_usec < 0 ||
      VAR_25.tv_usec >= 1000000) {
   VAR_33 = VAR_1;
   goto done;
  }
  if (!FUNC_15(&VAR_25))
   VAR_26 = 0;
  else if (VAR_25.tv_sec <= VAR_4) {
   VAR_28 = FUNC_16(VAR_25);
   VAR_27 = VAR_28;
   VAR_27 >>= VAR_10;
   if (FUNC_0(&VAR_26, VAR_28))
    VAR_26 += VAR_11;
   if (VAR_26 <= VAR_9 - VAR_28)
    VAR_26 += VAR_28;
   else
    VAR_26 = -1;
  } else
   VAR_26 = -1;
 } else
  VAR_26 = -1;
 FUNC_12(VAR_12);

 for (;;) {
  VAR_33 = FUNC_10(VAR_12, VAR_21, VAR_22, VAR_13);
  if (VAR_33 || VAR_12->td_retval[0] != 0)
   break;
  VAR_33 = FUNC_13(VAR_12, VAR_26, VAR_27);
  if (VAR_33)
   break;
  VAR_33 = FUNC_9(VAR_12, VAR_21, VAR_22);
  if (VAR_33 || VAR_12->td_retval[0] != 0)
   break;
 }
 FUNC_11(VAR_12);

done:

 if (VAR_33 == VAR_2)
  VAR_33 = VAR_0;
 if (VAR_33 == VAR_3)
  VAR_33 = 0;


 if (VAR_18 != VAR_8 && VAR_22[0] != ((void*)0)) { int VAR_39; for (VAR_39 = 0; VAR_39 < VAR_30 / sizeof *VAR_24; VAR_39++) VAR_22[0][VAR_39] = (VAR_22[0][VAR_39] >> 32) | (VAR_22[0][VAR_39] << 32); };
 if (VAR_18 != VAR_8 && VAR_22[1] != ((void*)0)) { int VAR_40; for (VAR_40 = 0; VAR_40 < VAR_30 / sizeof *VAR_24; VAR_40++) VAR_22[1][VAR_40] = (VAR_22[1][VAR_40] >> 32) | (VAR_22[1][VAR_40] << 32); };
 if (VAR_18 != VAR_8 && VAR_22[2] != ((void*)0)) { int VAR_41; for (VAR_41 = 0; VAR_41 < VAR_30 / sizeof *VAR_24; VAR_41++) VAR_22[2][VAR_41] = (VAR_22[2][VAR_41] >> 32) | (VAR_22[2][VAR_41] << 32); };





 if (VAR_33 == 0) {
  int VAR_42;

  if (VAR_14 && (VAR_42 = FUNC_0(VAR_22[0], VAR_14, VAR_31))) VAR_33 = VAR_42;;
  if (VAR_15 && (VAR_42 = FUNC_0(VAR_22[1], VAR_15, VAR_31))) VAR_33 = VAR_42;;
  if (VAR_16 && (VAR_42 = FUNC_0(VAR_22[2], VAR_16, VAR_31))) VAR_33 = VAR_42;;

 }
 if (VAR_23 != &VAR_20[0])
  FUNC_2(VAR_23, VAR_5);

 return (VAR_33);
}
