
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipw_softc {int dummy; } ;
struct ipw_scan_options {void* flags; void* channels; } ;
typedef int opts ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ipw_softc*,int ,struct ipw_scan_options*,int) ;

__attribute__((used)) static int
FUNC_3(struct ipw_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct ipw_scan_options VAR_4;

 FUNC_0(("Scan options: mask 0x%x flags 0x%x\n", VAR_2, VAR_3));
 VAR_4.channels = FUNC_1(VAR_2);
 VAR_4.flags = FUNC_1(VAR_3);
 return FUNC_2(VAR_1, VAR_0, &VAR_4, sizeof(VAR_4));
}
