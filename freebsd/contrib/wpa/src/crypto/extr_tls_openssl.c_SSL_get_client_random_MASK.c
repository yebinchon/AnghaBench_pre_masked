
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* s3; } ;
struct TYPE_4__ {int client_random; } ;
typedef TYPE_2__ SSL ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char*,int ,size_t) ;

__attribute__((used)) static size_t FUNC_1(const SSL *VAR_1, unsigned char *VAR_2,
        size_t VAR_3)
{
 if (!VAR_1->s3 || VAR_3 < VAR_0)
  return 0;
 FUNC_0(VAR_2, VAR_1->s3->client_random, VAR_0);
 return VAR_0;
}
