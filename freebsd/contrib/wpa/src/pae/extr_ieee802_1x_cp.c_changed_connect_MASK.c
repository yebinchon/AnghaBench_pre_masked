
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_cp_sm {scalar_t__ connect; scalar_t__ chgd_server; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee802_1x_cp_sm*) ;

__attribute__((used)) static int FUNC_1(struct ieee802_1x_cp_sm *VAR_1)
{
 return VAR_1->connect != VAR_0 || VAR_1->chgd_server || FUNC_0(VAR_1);
}
