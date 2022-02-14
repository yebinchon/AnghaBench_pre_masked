
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int n; char* s; } ;
typedef TYPE_1__ argsin ;
struct TYPE_22__ {char (* system ) (TYPE_2__*,char*) ;char (* get_errno ) (TYPE_2__*) ;char (* time ) (TYPE_2__*,int *) ;int (* unlink ) (TYPE_2__*,char*) ;int (* rename ) (TYPE_2__*,char*,char*) ;int (* open ) (TYPE_2__*,char*,int) ;int (* close ) (TYPE_2__*,int) ;int (* write ) (TYPE_2__*,int,char*,int) ;int (* read ) (TYPE_2__*,int,char*,int) ;long (* lseek ) (TYPE_2__*,int,long,int ) ;int (* isatty ) (TYPE_2__*,int) ;int (* read_stdin ) (TYPE_2__*,char*,int) ;int (* write_stdout ) (TYPE_2__*,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 () ;
 char* VAR_5 ;
 int FUNC_2 (int,char*,int,int,int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int,char*,int) ;
 int FUNC_8 (TYPE_2__*,int,char*,int) ;
 long FUNC_9 (TYPE_2__*,int,long,int ) ;
 long FUNC_10 (TYPE_2__*,int,long,int ) ;
 long FUNC_11 (TYPE_2__*,int,long,int ) ;
 long FUNC_12 (TYPE_2__*,int,long,int ) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*,char*,int) ;
 int FUNC_15 (TYPE_2__*,char*,int) ;
 char FUNC_16 (TYPE_2__*,char*) ;
 char FUNC_17 (TYPE_2__*) ;
 char FUNC_18 (TYPE_2__*,int *) ;
 int FUNC_19 (TYPE_2__*,char*) ;
 int FUNC_20 (TYPE_2__*,char*,char*) ;
 int FUNC_21 (TYPE_2__*,char*,int) ;
 int* VAR_6 ;

__attribute__((used)) static int
FUNC_22 (int VAR_7, argsin *VAR_8)
{
  int VAR_9;
  char VAR_10;
  switch (VAR_7)
    {
    case 128:
      VAR_4->write_stdout (VAR_4, &VAR_10, 1);
      return 0;
    case 129:
      for (VAR_9 = 0; VAR_9 < VAR_8->n; VAR_9++)
 VAR_4->write_stdout (VAR_4, VAR_8->s, FUNC_4 (VAR_8->s));
      return 0;
    case 135:
      VAR_4->read_stdin (VAR_4, &VAR_10, 1);
      VAR_8->n = VAR_10;
      return 1;
    case 144:
      VAR_8->n = VAR_4->system (VAR_4, VAR_8->s);
      return 1;
    case 139:
      VAR_8->n = VAR_4->get_errno (VAR_4);
      return 1;
    case 131:
      VAR_8->n = VAR_4->time (VAR_4, ((void*)0));
      return 1;

    case 143:

      VAR_8->n =






 FUNC_1 () / 10000;

      return 1;

    case 134:
      VAR_8->n = VAR_4->unlink (VAR_4, VAR_8->s);
      return 1;
    case 133:
      VAR_8->n = VAR_4->rename (VAR_4, VAR_8[0].s, VAR_8[1].s);
      return 1;

    case 137:

      VAR_9 = VAR_6[VAR_8[1].n];


      if (FUNC_3 (VAR_8->s, ":tt") == 0)
 {
   if (VAR_9 == VAR_1)
     VAR_8->n = 0 ;
   else
     VAR_8->n = 1 ;
 }
      else
 VAR_8->n = VAR_4->open (VAR_4, VAR_8->s, VAR_9);
      return 1;

    case 142:
      VAR_8->n = VAR_4->close (VAR_4, VAR_8->n);
      return 1;

    case 130:

      VAR_8->n = VAR_8[1].n -
 VAR_4->write (VAR_4, VAR_8[0].n, VAR_8[1].s, VAR_8[1].n);
      return 1;

    case 136:
      {
 char *VAR_11 = FUNC_0 (VAR_8[2].n);
 int VAR_12 = VAR_4->read (VAR_4, VAR_8[0].n, VAR_11, VAR_8[2].n);
 if (VAR_12 > 0)
   FUNC_2 (VAR_8[1].n, VAR_11, VAR_12, 1, 0, 0);
 VAR_8->n = VAR_8[2].n - VAR_12;
 return 1;
      }

    case 132:

      VAR_8->n = VAR_4->lseek (VAR_4, VAR_8[0].n, VAR_8[1].n, 0) < 0;
      return 1;

    case 141:
      {
 long VAR_13 = VAR_4->lseek (VAR_4, VAR_8->n, 0, VAR_2);
 VAR_8->n = VAR_4->lseek (VAR_4, VAR_8->n, 0, VAR_3);
 VAR_4->lseek (VAR_4, VAR_8->n, VAR_13, 0);
 return 1;
      }

    case 138:
      VAR_8->n = VAR_4->isatty (VAR_4, VAR_8->n);
      return 1;

    case 140:
      if (VAR_5 != ((void*)0))
 {
   int VAR_14 = FUNC_4 (VAR_5);
   if (VAR_14 > 255)
     {
       VAR_14 = 255;
       VAR_5[255] = '\0';
     }
   FUNC_2 (VAR_8[0].n,
        VAR_5, VAR_14 + 1, 1, 0, 0);
 }
      else
 FUNC_2 (VAR_8[0].n, "", 1, 1, 0, 0);
      return 1;

    default:
      return 0;
    }
}
