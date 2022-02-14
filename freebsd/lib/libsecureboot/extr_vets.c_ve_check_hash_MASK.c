
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hexbuf ;
struct TYPE_5__ {int vtable; } ;
typedef TYPE_1__ br_hash_compat_context ;
struct TYPE_6__ {int (* out ) (int *,unsigned char*) ;} ;
typedef TYPE_2__ br_hash_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int,unsigned char*,size_t) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (char*,char const*,int,char*,int,char const*) ;
 int FUNC_4 (unsigned char*,size_t) ;

int
FUNC_5(br_hash_compat_context *VAR_3, const br_hash_class *VAR_4,
    const char *VAR_5, const char *VAR_6, size_t VAR_7)
{
 char VAR_8[VAR_2 * 2 + 2];
 unsigned char VAR_9[VAR_2];
 char *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_4->out(&VAR_3->vtable, VAR_9);



 VAR_10 = FUNC_0(VAR_8, sizeof(VAR_8), VAR_9, VAR_7);
 if (!VAR_10)
  return (VAR_1);
 VAR_12 = 2*VAR_7;
 if ((VAR_11 = FUNC_1(VAR_10, VAR_6, VAR_12))) {
  FUNC_3("%s: %.*s != %.*s", VAR_5, VAR_12, VAR_10, VAR_12, VAR_6);
  VAR_11 = VAR_1;
 }
 return (VAR_11 ? VAR_11 : VAR_0);
}
