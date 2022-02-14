
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagename {int page; int subpage; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pagename*,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 struct pagename* FUNC_3 (int) ;
 int VAR_2 ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int VAR_3, int VAR_4, char *VAR_5) {
 struct pagename *VAR_6;

 if (VAR_3 < 0 || VAR_4 < 0 || VAR_5 == ((void*)0) || VAR_5[0] == '\0')
  return;


 if ((VAR_6 = FUNC_3(sizeof(struct pagename))) == ((void*)0) ||
     (VAR_6->name = FUNC_4(VAR_5)) == ((void*)0))
  FUNC_2(VAR_0, ((void*)0));


 FUNC_0(VAR_6->name);

 VAR_6->page = VAR_3;
 VAR_6->subpage = VAR_4;
 FUNC_1(&VAR_2, VAR_6, VAR_1);
}
