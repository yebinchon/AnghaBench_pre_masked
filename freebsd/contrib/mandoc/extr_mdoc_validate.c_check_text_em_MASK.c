
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {scalar_t__ type; char* string; } ;
struct roff_man {TYPE_1__* last; } ;
struct TYPE_2__ {struct roff_node* next; struct roff_node* prev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,int,int,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct roff_man *VAR_2, int VAR_3, int VAR_4, char *VAR_5)
{
 const struct roff_node *VAR_6, *VAR_7;
 char *VAR_8;

 VAR_6 = VAR_2->last->prev;
 VAR_7 = VAR_2->last->next;



 for (VAR_8 = VAR_5; *VAR_8 != '\0'; VAR_8++) {
  if (VAR_8[0] != '-' || VAR_8[1] != '-')
   continue;
  VAR_8++;



  if (VAR_8[1] == '-') {
   while (VAR_8[1] == '-')
    VAR_8++;
   continue;
  }



  if ((VAR_8 - VAR_5 > 1 && VAR_8[-2] != ' ') ||
      (VAR_8[1] != '\0' && VAR_8[1] != ' '))
   continue;



  if ((VAR_8 - VAR_5 > 2 ?
       FUNC_0((unsigned char)VAR_8[-3]) :
       VAR_6 != ((void*)0) &&
       VAR_6->type == VAR_1 &&
       *VAR_6->string != '\0' &&
       FUNC_0((unsigned char)VAR_6->string[
         FUNC_2(VAR_6->string) - 1])) ||
      (VAR_8[1] != '\0' && VAR_8[2] != '\0' ?
       FUNC_0((unsigned char)VAR_8[2]) :
       VAR_7 != ((void*)0) &&
       VAR_7->type == VAR_1 &&
       FUNC_0((unsigned char)*VAR_7->string))) {
   FUNC_1(VAR_0,
       VAR_3, VAR_4 + (int)(VAR_8 - VAR_5) - 1, ((void*)0));
   break;
  }
 }
}
