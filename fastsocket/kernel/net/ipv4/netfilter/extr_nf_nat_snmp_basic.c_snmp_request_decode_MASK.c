
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_request {int error_index; int error_status; int id; } ;
struct asn1_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct asn1_ctx*,unsigned char**,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct asn1_ctx*,unsigned char*,int *) ;
 int FUNC_2 (struct asn1_ctx*,unsigned char*,int *) ;

__attribute__((used)) static unsigned char FUNC_3(struct asn1_ctx *VAR_3,
      struct snmp_request *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned char *VAR_8;

 if (!FUNC_0(VAR_3, &VAR_8, &VAR_5, &VAR_6, &VAR_7))
  return 0;

 if (VAR_5 != VAR_2 || VAR_6 != VAR_1 || VAR_7 != VAR_0)
  return 0;

 if (!FUNC_2(VAR_3, VAR_8, &VAR_4->id))
  return 0;

 if (!FUNC_0(VAR_3, &VAR_8, &VAR_5, &VAR_6, &VAR_7))
  return 0;

 if (VAR_5 != VAR_2 || VAR_6 != VAR_1 || VAR_7 != VAR_0)
  return 0;

 if (!FUNC_1(VAR_3, VAR_8, &VAR_4->error_status))
  return 0;

 if (!FUNC_0(VAR_3, &VAR_8, &VAR_5, &VAR_6, &VAR_7))
  return 0;

 if (VAR_5 != VAR_2 || VAR_6 != VAR_1 || VAR_7 != VAR_0)
  return 0;

 if (!FUNC_1(VAR_3, VAR_8, &VAR_4->error_index))
  return 0;

 return 1;
}
