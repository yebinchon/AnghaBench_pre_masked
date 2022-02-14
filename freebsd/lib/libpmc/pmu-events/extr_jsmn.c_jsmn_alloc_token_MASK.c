
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int start; int end; scalar_t__ size; } ;
typedef TYPE_1__ jsmntok_t ;
struct TYPE_7__ {scalar_t__ toknext; } ;
typedef TYPE_2__ jsmn_parser ;



__attribute__((used)) static jsmntok_t *FUNC_0(jsmn_parser *VAR_0,
       jsmntok_t *VAR_1, size_t VAR_2)
{
 jsmntok_t *VAR_3;

 if ((unsigned)VAR_0->toknext >= VAR_2)
  return ((void*)0);
 VAR_3 = &VAR_1[VAR_0->toknext++];
 VAR_3->start = VAR_3->end = -1;
 VAR_3->size = 0;
 return VAR_3;
}
