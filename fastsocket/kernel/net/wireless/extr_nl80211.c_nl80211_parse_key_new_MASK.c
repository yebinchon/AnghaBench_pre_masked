
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {void* cipher; void* seq_len; void* seq; void* key_len; void* key; } ;
struct key_parse {int def; int defmgmt; int def_uni; int def_multi; scalar_t__ type; TYPE_1__ p; int idx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int,struct nlattr*,int ) ;

__attribute__((used)) static int FUNC_5(struct nlattr *VAR_16, struct key_parse *VAR_17)
{
 struct nlattr *VAR_18[VAR_9 + 1];
 int VAR_19 = FUNC_4(VAR_18, VAR_9, VAR_16,
       VAR_15);
 if (VAR_19)
  return VAR_19;

 VAR_17->def = !!VAR_18[VAR_3];
 VAR_17->defmgmt = !!VAR_18[VAR_4];

 if (VAR_17->def) {
  VAR_17->def_uni = 1;
  VAR_17->def_multi = 1;
 }
 if (VAR_17->defmgmt)
  VAR_17->def_multi = 1;

 if (VAR_18[VAR_8])
  VAR_17->idx = FUNC_2(VAR_18[VAR_8]);

 if (VAR_18[VAR_2]) {
  VAR_17->p.key = FUNC_0(VAR_18[VAR_2]);
  VAR_17->p.key_len = FUNC_3(VAR_18[VAR_2]);
 }

 if (VAR_18[VAR_10]) {
  VAR_17->p.seq = FUNC_0(VAR_18[VAR_10]);
  VAR_17->p.seq_len = FUNC_3(VAR_18[VAR_10]);
 }

 if (VAR_18[VAR_1])
  VAR_17->p.cipher = FUNC_1(VAR_18[VAR_1]);

 if (VAR_18[VAR_11]) {
  VAR_17->type = FUNC_1(VAR_18[VAR_11]);
  if (VAR_17->type < 0 || VAR_17->type >= VAR_12)
   return -VAR_0;
 }

 if (VAR_18[VAR_5]) {
  struct nlattr *VAR_20[VAR_13];
  VAR_19 = FUNC_4(VAR_20, VAR_13 - 1,
           VAR_18[VAR_5],
           VAR_14);
  if (VAR_19)
   return VAR_19;

  VAR_17->def_uni = VAR_20[VAR_7];
  VAR_17->def_multi = VAR_20[VAR_6];
 }

 return 0;
}
