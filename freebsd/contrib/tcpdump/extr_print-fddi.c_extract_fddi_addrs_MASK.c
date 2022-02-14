
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fddi_header {size_t* fddi_dhost; size_t* fddi_shost; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static inline void
FUNC_1(const struct fddi_header *VAR_2, char *VAR_3, char *VAR_4)
{
 register int VAR_5;

 if (VAR_1) {




  for (VAR_5 = 0; VAR_5 < 6; ++VAR_5)
   VAR_4[VAR_5] = VAR_0[VAR_2->fddi_dhost[VAR_5]];
  for (VAR_5 = 0; VAR_5 < 6; ++VAR_5)
   VAR_3[VAR_5] = VAR_0[VAR_2->fddi_shost[VAR_5]];
 }
 else {
  FUNC_0(VAR_4, (const char *)VAR_2->fddi_dhost, 6);
  FUNC_0(VAR_3, (const char *)VAR_2->fddi_shost, 6);
 }
}
