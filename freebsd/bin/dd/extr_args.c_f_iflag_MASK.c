
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iflag {int noset; int set; int name; } ;


 struct iflag* FUNC_0 (struct iflag*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_3)
{
 struct iflag *VAR_4, VAR_5;

 while (VAR_3 != ((void*)0)) {
  VAR_5.name = FUNC_3(&VAR_3, ",");
  VAR_4 = FUNC_0(&VAR_5, VAR_2, FUNC_2(VAR_2), sizeof(struct iflag),
      VAR_0);
  if (VAR_4 == ((void*)0))
   FUNC_1(1, "unknown iflag %s", VAR_5.name);
  if (VAR_1 & VAR_4->noset)
   FUNC_1(1, "%s: illegal conversion combination", VAR_5.name);
  VAR_1 |= VAR_4->set;
 }
}
