
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int sectorsize; int name; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct g_consumer*,scalar_t__,char*,int) ;
 char* FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct g_consumer *VAR_3)
{
 struct g_provider *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->provider;
 VAR_5 = FUNC_3(VAR_4->sectorsize, VAR_0, VAR_1 | VAR_2);
 VAR_6 = FUNC_2(VAR_3,
     VAR_4->mediasize - 2 * VAR_4->sectorsize,
     VAR_5, VAR_4->sectorsize);
 if (VAR_6 != 0) {
  FUNC_0(1, "Cannot erase metadata on %s (error=%d).",
      VAR_4->name, VAR_6);
 }
 FUNC_1(VAR_5, VAR_0);
 return (VAR_6);
}
