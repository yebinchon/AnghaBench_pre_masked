
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; } ;
struct linux_mknodat_args {int dfd; int mode; int dev; int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;


 int VAR_8 ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int,char*,int ,int) ;
 int FUNC_4 (struct thread*,int,char*,int ,int,int ) ;
 int FUNC_5 (struct thread*,int,char*,int ,int,int) ;

int
FUNC_6(struct thread *VAR_9, struct linux_mknodat_args *VAR_10)
{
 char *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = (VAR_10->dfd == VAR_3) ? VAR_0 : VAR_10->dfd;
 FUNC_0(VAR_9, VAR_10->filename, &VAR_11, VAR_13);

 switch (VAR_10->mode & VAR_7) {
 case 130:
 case 128:
  VAR_12 = FUNC_3(VAR_9, VAR_13, VAR_11, VAR_8, VAR_10->mode);
  break;

 case 132:
 case 133:
  VAR_12 = FUNC_4(VAR_9, VAR_13, VAR_11, VAR_8, VAR_10->mode,
      VAR_10->dev);
  break;

 case 131:
  VAR_12 = VAR_2;
  break;

 case 0:
  VAR_10->mode |= 129;

 case 129:
  VAR_12 = FUNC_5(VAR_9, VAR_13, VAR_11, VAR_8,
      VAR_6 | VAR_4 | VAR_5, VAR_10->mode);
  if (VAR_12 == 0)
   FUNC_2(VAR_9, VAR_9->td_retval[0]);
  break;

 default:
  VAR_12 = VAR_1;
  break;
 }
 FUNC_1(VAR_11);
 return (VAR_12);
}
