
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {char* name; int index; int error; char* obj_name; int type; int root; struct varobj* parent; int * value; } ;


 int FUNC_0 (struct varobj*) ;
 int FUNC_1 (struct varobj*) ;
 struct varobj* FUNC_2 () ;
 int FUNC_3 (struct varobj*,struct varobj*) ;
 int FUNC_4 (struct varobj*) ;
 int * FUNC_5 (struct varobj*,int) ;
 int FUNC_6 (char**,char*,char*,char*) ;

__attribute__((used)) static struct varobj *
FUNC_7 (struct varobj *VAR_0, int VAR_1, char *VAR_2)
{
  struct varobj *VAR_3;
  char *VAR_4;

  VAR_3 = FUNC_2 ();


  VAR_3->name = VAR_2;
  VAR_3->index = VAR_1;
  VAR_3->value = FUNC_5 (VAR_0, VAR_1);
  if ((!FUNC_0 (VAR_3) && VAR_3->value == ((void*)0)) || VAR_0->error)
    VAR_3->error = 1;
  VAR_3->parent = VAR_0;
  VAR_3->root = VAR_0->root;
  FUNC_6 (&VAR_4, "%s.%s", VAR_0->obj_name, VAR_2);
  VAR_3->obj_name = VAR_4;
  FUNC_1 (VAR_3);


  FUNC_3 (VAR_0, VAR_3);


  VAR_3->type = FUNC_4 (VAR_3);

  return VAR_3;
}
