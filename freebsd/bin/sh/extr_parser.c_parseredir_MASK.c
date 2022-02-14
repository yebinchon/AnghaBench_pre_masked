
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
union node {TYPE_1__ nfile; int type; } ;
struct nhere {int dummy; } ;
struct nfile {int dummy; } ;
struct heredoc {int striptabs; union node* here; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char) ;
 struct heredoc* VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 union node* VAR_9 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(char *VAR_10, int VAR_11)
{
 char VAR_12 = *VAR_10;
 union node *VAR_13;

 VAR_13 = (union node *)FUNC_3(sizeof (struct nfile));
 if (VAR_11 == '>') {
  VAR_13->nfile.fd = 1;
  VAR_11 = FUNC_1();
  if (VAR_11 == '>')
   VAR_13->type = VAR_0;
  else if (VAR_11 == '&')
   VAR_13->type = VAR_7;
  else if (VAR_11 == '|')
   VAR_13->type = VAR_1;
  else {
   VAR_13->type = VAR_6;
   FUNC_2();
  }
 } else {
  VAR_13->nfile.fd = 0;
  VAR_11 = FUNC_1();
  if (VAR_11 == '<') {
   if (sizeof (struct nfile) != sizeof (struct nhere)) {
    VAR_13 = (union node *)FUNC_3(sizeof (struct nhere));
    VAR_13->nfile.fd = 0;
   }
   VAR_13->type = VAR_5;
   VAR_8 = (struct heredoc *)FUNC_3(sizeof (struct heredoc));
   VAR_8->here = VAR_13;
   if ((VAR_11 = FUNC_1()) == '-') {
    VAR_8->striptabs = 1;
   } else {
    VAR_8->striptabs = 0;
    FUNC_2();
   }
  } else if (VAR_11 == '&')
   VAR_13->type = VAR_3;
  else if (VAR_11 == '>')
   VAR_13->type = VAR_4;
  else {
   VAR_13->type = VAR_2;
   FUNC_2();
  }
 }
 if (VAR_12 != '\0')
  VAR_13->nfile.fd = FUNC_0(VAR_12);
 VAR_9 = VAR_13;
}
