
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct g_consumer*,scalar_t__,char*,int) ;
 char* FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct g_consumer *VAR_5)
{
 struct g_provider *VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = VAR_5->provider;
 VAR_7 = FUNC_3(4 * VAR_6->sectorsize, VAR_0, VAR_1 | VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8 = FUNC_2(VAR_5, VAR_6->mediasize - VAR_6->sectorsize *
      (63 - VAR_9 * VAR_4),
      VAR_7, 4 * VAR_6->sectorsize);
  if (VAR_8 != 0) {
   FUNC_0(1, "Cannot erase metadata on %s (error=%d).",
       VAR_6->name, VAR_8);
  }
 }
 FUNC_1(VAR_7, VAR_0);
 return (VAR_8);
}
