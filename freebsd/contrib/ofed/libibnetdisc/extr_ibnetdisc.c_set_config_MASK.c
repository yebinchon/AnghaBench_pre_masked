
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibnd_config {scalar_t__ retries; scalar_t__ timeout_ms; scalar_t__ max_smps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ibnd_config*,struct ibnd_config*,int) ;

__attribute__((used)) static int FUNC_1(struct ibnd_config *VAR_4, struct ibnd_config *VAR_5)
{
 if (!VAR_4)
  return (-VAR_3);

 if (VAR_5)
  FUNC_0(VAR_4, VAR_5, sizeof(*VAR_4));

 if (!VAR_4->max_smps)
  VAR_4->max_smps = VAR_0;
 if (!VAR_4->timeout_ms)
  VAR_4->timeout_ms = VAR_2;
 if (!VAR_4->retries)
  VAR_4->retries = VAR_1;

 return (0);
}
