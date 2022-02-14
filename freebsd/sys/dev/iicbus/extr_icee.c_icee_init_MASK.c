
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icee_softc {int wr_sz; int type; int size; int dev; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int,char*,int *) ;

__attribute__((used)) static void
FUNC_3(struct icee_softc *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->dev);
 VAR_2 = FUNC_1(VAR_0->dev);
 FUNC_2(VAR_1, VAR_2, "size", &VAR_0->size);
 FUNC_2(VAR_1, VAR_2, "type", &VAR_0->type);
 FUNC_2(VAR_1, VAR_2, "wr_sz", &VAR_0->wr_sz);
}
