
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conv {int noset; int set; scalar_t__ ctab; int name; } ;


 struct conv* FUNC_0 (struct conv*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_4)
{
 struct conv *VAR_5, VAR_6;

 while (VAR_4 != ((void*)0)) {
  VAR_6.name = FUNC_3(&VAR_4, ",");
  VAR_5 = FUNC_0(&VAR_6, VAR_1, FUNC_2(VAR_1), sizeof(struct conv),
      VAR_0);
  if (VAR_5 == ((void*)0))
   FUNC_1(1, "unknown conversion %s", VAR_6.name);
  if (VAR_3 & VAR_5->noset)
   FUNC_1(1, "%s: illegal conversion combination", VAR_6.name);
  VAR_3 |= VAR_5->set;
  if (VAR_5->ctab)
   VAR_2 = VAR_5->ctab;
 }
}
