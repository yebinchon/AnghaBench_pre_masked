
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int flags; int comments; int * includepaths; } ;


 struct ucl_parser* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ucl_parser*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ucl_parser*,char*,int ,struct ucl_parser*) ;
 int FUNC_4 (struct ucl_parser*,char*,int ,struct ucl_parser*) ;
 int FUNC_5 (struct ucl_parser*,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;

struct ucl_parser*
FUNC_6 (int VAR_9)
{
 struct ucl_parser *VAR_10;

 VAR_10 = FUNC_0 (sizeof (struct ucl_parser));
 if (VAR_10 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_1 (VAR_10, 0, sizeof (struct ucl_parser));

 FUNC_4 (VAR_10, "include", VAR_3, VAR_10);
 FUNC_4 (VAR_10, "try_include", VAR_8, VAR_10);
 FUNC_4 (VAR_10, "includes", VAR_4, VAR_10);
 FUNC_4 (VAR_10, "priority", VAR_7, VAR_10);
 FUNC_4 (VAR_10, "load", VAR_6, VAR_10);
 FUNC_3 (VAR_10, "inherit", VAR_5, VAR_10);

 VAR_10->flags = VAR_9;
 VAR_10->includepaths = ((void*)0);

 if (VAR_9 & VAR_2) {
  VAR_10->comments = FUNC_2 (VAR_0);
 }

 if (!(VAR_9 & VAR_1)) {

  FUNC_5 (VAR_10, ((void*)0), 0);
 }

 return VAR_10;
}
