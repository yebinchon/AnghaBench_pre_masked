
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_kay_peer {int sci; int mn; int mi; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee802_1x_kay_peer *VAR_1)
{
 FUNC_2(VAR_0, "\tMI: %s  MN: %d  SCI: %s",
     FUNC_0(VAR_1->mi), VAR_1->mn, FUNC_1(&VAR_1->sci));
}
