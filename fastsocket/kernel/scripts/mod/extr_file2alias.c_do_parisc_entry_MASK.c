
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device_id {scalar_t__ hw_type; scalar_t__ hversion; scalar_t__ hversion_rev; scalar_t__ sversion; } ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, struct parisc_device_id *VAR_5,
  char *VAR_6)
{
 VAR_5->hw_type = FUNC_1(VAR_5->hw_type);
 VAR_5->hversion = FUNC_1(VAR_5->hversion);
 VAR_5->hversion_rev = FUNC_1(VAR_5->hversion_rev);
 VAR_5->sversion = FUNC_1(VAR_5->sversion);

 FUNC_3(VAR_6, "parisc:");
 FUNC_0(VAR_6, "t", VAR_5->hw_type != VAR_2, VAR_5->hw_type);
 FUNC_0(VAR_6, "hv", VAR_5->hversion != VAR_0, VAR_5->hversion);
 FUNC_0(VAR_6, "rev", VAR_5->hversion_rev != VAR_1, VAR_5->hversion_rev);
 FUNC_0(VAR_6, "sv", VAR_5->sversion != VAR_3, VAR_5->sversion);

 FUNC_2(VAR_6);
 return 1;
}
