
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct msgbuf {int msg_lastpri; int msg_flags; int msg_lock; int msg_wseq; } ;
typedef int intmax_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msgbuf*,int *,char const) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int ) ;
 size_t FUNC_4 (char*,char*,int) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ VAR_3 ;

void
FUNC_6(struct msgbuf *VAR_4, int VAR_5, const char *VAR_6, int VAR_7)
{
 u_int VAR_8;
 size_t VAR_9, VAR_10;
 char VAR_11[VAR_0];
 char VAR_12[32];
 int VAR_13, VAR_14, VAR_15;

 VAR_9 = FUNC_5(VAR_6);
 VAR_10 = 0;


 if (VAR_9 == 0)
  return;

 FUNC_1(&VAR_4->msg_lock);





 if (VAR_5 != -1)
  VAR_10 = FUNC_4(VAR_11, "<%d>", VAR_5);




 VAR_8 = VAR_4->msg_wseq;
 if (VAR_4->msg_lastpri != VAR_5 && (VAR_4->msg_flags & VAR_1) != 0) {

  FUNC_0(VAR_4, &VAR_8, '\n');
  VAR_4->msg_flags &= ~VAR_1;
 }

 VAR_15 = 1;
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {





  if ((VAR_4->msg_flags & VAR_1) == 0 && VAR_10 != 0) {
   int VAR_16;

   for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
    FUNC_0(VAR_4, &VAR_8, VAR_11[VAR_16]);
  }

  if (VAR_2 && VAR_15 == 1 &&
      (VAR_4->msg_flags & VAR_1) == 0) {

   FUNC_3(VAR_12, sizeof(VAR_12), "[%jd] ",
       (intmax_t)VAR_3);
   for (VAR_14 = 0; VAR_12[VAR_14] != '\0'; VAR_14++)
    FUNC_0(VAR_4, &VAR_8, VAR_12[VAR_14]);
   VAR_15 = 0;
  }
  if ((VAR_7 != 0) && (VAR_6[VAR_13] == '\r'))
   continue;





  if (VAR_6[VAR_13] == '\n')
   VAR_4->msg_flags &= ~VAR_1;
  else
   VAR_4->msg_flags |= VAR_1;

  FUNC_0(VAR_4, &VAR_8, VAR_6[VAR_13]);
 }





 VAR_4->msg_wseq = VAR_8;




 VAR_4->msg_lastpri = VAR_5;

 FUNC_2(&VAR_4->msg_lock);

}
