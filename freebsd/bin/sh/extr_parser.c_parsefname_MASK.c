
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fname; } ;
union node {scalar_t__ type; TYPE_1__ nfile; } ;
struct heredoc {char* eofmark; struct heredoc* next; scalar_t__ striptabs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union node*,char*,int ) ;
 struct heredoc* VAR_5 ;
 struct heredoc* VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_7 ;
 union node* VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* VAR_9 ;

__attribute__((used)) static void
FUNC_7(void)
{
 union node *VAR_10 = VAR_8;

 FUNC_1(VAR_4);
 if (VAR_10->type == VAR_1) {
  struct heredoc *VAR_11 = VAR_5;
  struct heredoc *VAR_12;

  if (VAR_7 == 0)
   VAR_10->type = VAR_3;
  FUNC_0(("Here document %d\n", VAR_10->type));
  if (VAR_11->striptabs) {
   while (*VAR_9 == '\t')
    VAR_9++;
  }
  if (! FUNC_4(VAR_9))
   FUNC_6("Illegal eof marker for << redirection");
  FUNC_5(VAR_9);
  VAR_11->eofmark = VAR_9;
  VAR_11->next = ((void*)0);
  if (VAR_6 == ((void*)0))
   VAR_6 = VAR_11;
  else {
   for (VAR_12 = VAR_6 ; VAR_12->next ; VAR_12 = VAR_12->next);
   VAR_12->next = VAR_11;
  }
 } else if (VAR_10->type == VAR_2 || VAR_10->type == VAR_0) {
  FUNC_2(VAR_10, VAR_9, 0);
 } else {
  VAR_10->nfile.fname = FUNC_3();
 }
}
