
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_v1_trap {unsigned long* id; scalar_t__ ip_address; int time; int specific; int general; int id_len; } ;
struct oct1_map {int dummy; } ;
struct asn1_ctx {scalar_t__ pointer; int begin; } ;
typedef int __sum16 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct asn1_ctx*,unsigned char**,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct asn1_ctx*,unsigned char*,unsigned char**,unsigned int*) ;
 int FUNC_2 (struct asn1_ctx*,unsigned char*,unsigned long**,int *) ;
 int FUNC_3 (struct asn1_ctx*,unsigned char*,int *) ;
 int FUNC_4 (struct asn1_ctx*,unsigned char*,int *) ;
 int FUNC_5 (unsigned long*) ;
 int FUNC_6 (int ,scalar_t__,struct oct1_map const*,int *) ;

__attribute__((used)) static unsigned char FUNC_7(struct asn1_ctx *VAR_8,
          struct snmp_v1_trap *VAR_9,
          const struct oct1_map *VAR_10,
          __sum16 *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned char *VAR_16;

 if (!FUNC_0(VAR_8, &VAR_16, &VAR_12, &VAR_13, &VAR_14))
  return 0;

 if (VAR_12 != VAR_5 || VAR_13 != VAR_4 || VAR_14 != VAR_2)
  return 0;

 if (!FUNC_2(VAR_8, VAR_16, &VAR_9->id, &VAR_9->id_len))
  return 0;

 if (!FUNC_0(VAR_8, &VAR_16, &VAR_12, &VAR_13, &VAR_14))
  goto err_id_free;

 if (!((VAR_12 == VAR_0 && VAR_13 == VAR_4 && VAR_14 == VAR_6) ||
       (VAR_12 == VAR_5 && VAR_13 == VAR_4 && VAR_14 == VAR_3)))
  goto err_id_free;

 if (!FUNC_1(VAR_8, VAR_16, (unsigned char **)&VAR_9->ip_address, &VAR_15))
  goto err_id_free;


 if (VAR_15 != 4)
  goto err_addr_free;

 FUNC_6(VAR_8->begin, VAR_8->pointer - 4, VAR_10, VAR_11);

 if (!FUNC_0(VAR_8, &VAR_16, &VAR_12, &VAR_13, &VAR_14))
  goto err_addr_free;

 if (VAR_12 != VAR_5 || VAR_13 != VAR_4 || VAR_14 != VAR_1)
  goto err_addr_free;

 if (!FUNC_3(VAR_8, VAR_16, &VAR_9->general))
  goto err_addr_free;

 if (!FUNC_0(VAR_8, &VAR_16, &VAR_12, &VAR_13, &VAR_14))
  goto err_addr_free;

 if (VAR_12 != VAR_5 || VAR_13 != VAR_4 || VAR_14 != VAR_1)
  goto err_addr_free;

 if (!FUNC_3(VAR_8, VAR_16, &VAR_9->specific))
  goto err_addr_free;

 if (!FUNC_0(VAR_8, &VAR_16, &VAR_12, &VAR_13, &VAR_14))
  goto err_addr_free;

 if (!((VAR_12 == VAR_0 && VAR_13 == VAR_4 && VAR_14 == VAR_7) ||
       (VAR_12 == VAR_5 && VAR_13 == VAR_4 && VAR_14 == VAR_1)))
  goto err_addr_free;

 if (!FUNC_4(VAR_8, VAR_16, &VAR_9->time))
  goto err_addr_free;

 return 1;

err_addr_free:
 FUNC_5((unsigned long *)VAR_9->ip_address);

err_id_free:
 FUNC_5(VAR_9->id);

 return 0;
}
