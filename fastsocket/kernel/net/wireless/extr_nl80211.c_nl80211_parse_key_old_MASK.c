
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {void* cipher; void* seq_len; void* seq; void* key_len; void* key; } ;
struct key_parse {int def; int defmgmt; int def_uni; int def_multi; scalar_t__ type; TYPE_1__ p; int idx; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nlattr**,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct genl_info *VAR_14, struct key_parse *VAR_15)
{
 if (VAR_14->attrs[VAR_2]) {
  VAR_15->p.key = FUNC_0(VAR_14->attrs[VAR_2]);
  VAR_15->p.key_len = FUNC_3(VAR_14->attrs[VAR_2]);
 }

 if (VAR_14->attrs[VAR_7]) {
  VAR_15->p.seq = FUNC_0(VAR_14->attrs[VAR_7]);
  VAR_15->p.seq_len = FUNC_3(VAR_14->attrs[VAR_7]);
 }

 if (VAR_14->attrs[VAR_6])
  VAR_15->idx = FUNC_2(VAR_14->attrs[VAR_6]);

 if (VAR_14->attrs[VAR_1])
  VAR_15->p.cipher = FUNC_1(VAR_14->attrs[VAR_1]);

 VAR_15->def = !!VAR_14->attrs[VAR_3];
 VAR_15->defmgmt = !!VAR_14->attrs[VAR_4];

 if (VAR_15->def) {
  VAR_15->def_uni = 1;
  VAR_15->def_multi = 1;
 }
 if (VAR_15->defmgmt)
  VAR_15->def_multi = 1;

 if (VAR_14->attrs[VAR_8]) {
  VAR_15->type = FUNC_1(VAR_14->attrs[VAR_8]);
  if (VAR_15->type < 0 || VAR_15->type >= VAR_11)
   return -VAR_0;
 }

 if (VAR_14->attrs[VAR_5]) {
  struct nlattr *VAR_16[VAR_12];
  int VAR_17 = FUNC_4(
    VAR_16, VAR_12 - 1,
    VAR_14->attrs[VAR_5],
    VAR_13);
  if (VAR_17)
   return VAR_17;

  VAR_15->def_uni = VAR_16[VAR_10];
  VAR_15->def_multi = VAR_16[VAR_9];
 }

 return 0;
}
