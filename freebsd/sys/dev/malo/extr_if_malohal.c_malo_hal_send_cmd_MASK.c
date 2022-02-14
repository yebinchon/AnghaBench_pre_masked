
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct malo_hal {int mh_cmdaddr; int mh_dmamap; int mh_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct malo_hal*,int ) ;
 int FUNC_2 (struct malo_hal*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct malo_hal *VAR_6)
{
 uint32_t VAR_7;

 FUNC_0(VAR_6->mh_dmat, VAR_6->mh_dmamap,
     VAR_0 | VAR_1);

 FUNC_2(VAR_6, VAR_3, VAR_6->mh_cmdaddr);
 VAR_7 = FUNC_1(VAR_6, VAR_5);

 FUNC_2(VAR_6, VAR_4,
     VAR_2);
}
