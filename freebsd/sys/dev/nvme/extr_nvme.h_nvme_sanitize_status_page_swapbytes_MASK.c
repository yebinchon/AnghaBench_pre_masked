
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_sanitize_status_page {void* etfcewnd; void* etfbewnd; void* etfownd; void* etfce; void* etfbe; void* etfo; void* scdw10; void* sstat; void* sprog; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static inline
void FUNC_2(struct nvme_sanitize_status_page *VAR_0)
{
 VAR_0->sprog = FUNC_0(VAR_0->sprog);
 VAR_0->sstat = FUNC_0(VAR_0->sstat);
 VAR_0->scdw10 = FUNC_1(VAR_0->scdw10);
 VAR_0->etfo = FUNC_1(VAR_0->etfo);
 VAR_0->etfbe = FUNC_1(VAR_0->etfbe);
 VAR_0->etfce = FUNC_1(VAR_0->etfce);
 VAR_0->etfownd = FUNC_1(VAR_0->etfownd);
 VAR_0->etfbewnd = FUNC_1(VAR_0->etfbewnd);
 VAR_0->etfcewnd = FUNC_1(VAR_0->etfcewnd);
}
