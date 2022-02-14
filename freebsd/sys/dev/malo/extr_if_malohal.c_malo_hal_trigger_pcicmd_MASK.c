
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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct malo_hal*,int ) ;
 int FUNC_2 (struct malo_hal*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct malo_hal *VAR_5)
{
 uint32_t VAR_6;

 FUNC_0(VAR_5->mh_dmat, VAR_5->mh_dmamap, VAR_0);

 FUNC_2(VAR_5, VAR_2, VAR_5->mh_cmdaddr);
 VAR_6 = FUNC_1(VAR_5, VAR_4);

 FUNC_2(VAR_5, VAR_4, 0x00);
 VAR_6 = FUNC_1(VAR_5, VAR_4);

 FUNC_2(VAR_5, VAR_3,
     VAR_1);
 VAR_6 = FUNC_1(VAR_5, VAR_4);
}
