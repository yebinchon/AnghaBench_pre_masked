
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* low_read ) (void*,unsigned char*,size_t) ;int (* low_write ) (void*,unsigned char const*,size_t) ;void* write_context; void* read_context; int * engine; } ;
typedef TYPE_1__ br_sslio_context ;
typedef int br_ssl_engine_context ;



void
FUNC_0(br_sslio_context *VAR_0,
 br_ssl_engine_context *VAR_1,
 int (*VAR_2)(void *VAR_3,
  unsigned char *VAR_4, size_t VAR_5),
 void *VAR_6,
 int (*VAR_7)(void *VAR_8,
  const unsigned char *VAR_9, size_t VAR_10),
 void *VAR_11)
{
 VAR_0->engine = VAR_1;
 VAR_0->low_read = VAR_2;
 VAR_0->read_context = VAR_6;
 VAR_0->low_write = VAR_7;
 VAR_0->write_context = VAR_11;
}
