
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devinfo_dev {char* dd_name; int dd_flags; char* dd_location; char* dd_pnpinfo; int dd_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct devinfo_dev*,int (*) (struct devinfo_dev*,void*),void*) ;
 struct devinfo_dev* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,char*,char*,char*,char*) ;
 int FUNC_5 (char*,char*,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_8(struct devinfo_dev *VAR_4, void *VAR_5)
{
 struct devinfo_dev *VAR_6;
 char *VAR_7, *VAR_8;

 do {
  if (!VAR_2 && VAR_4->dd_name[0] != '\0')
   break;
  if (!(VAR_4->dd_flags & VAR_1))
   break;
  if (VAR_4->dd_flags & VAR_0)
   break;
  VAR_6 = FUNC_1(VAR_4->dd_parent);
  VAR_7 = FUNC_6(VAR_6->dd_name);
  VAR_8 = VAR_7 + FUNC_7(VAR_7) - 1;
  while (VAR_8 >= VAR_7 && FUNC_3(*VAR_8))
   VAR_8--;
  *++VAR_8 = '\0';
  if (VAR_3)
   FUNC_4("Searching %s %s bus at %s for pnpinfo %s\n",
       VAR_4->dd_name, VAR_7, VAR_4->dd_location, VAR_4->dd_pnpinfo);
  FUNC_5(VAR_7, VAR_4->dd_name, VAR_4->dd_pnpinfo);
  FUNC_2(VAR_7);
 } while (0);

 return (FUNC_0(VAR_4, FUNC_8, VAR_5));
}
