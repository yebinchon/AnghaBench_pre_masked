
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef int buf ;
struct TYPE_9__ {int vtable; } ;
typedef TYPE_1__ br_hash_compat_context ;
struct TYPE_10__ {int (* update ) (int *,unsigned char*,int) ;int (* init ) (int *) ;} ;
typedef TYPE_2__ br_hash_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_2__ VAR_5 ;
 size_t VAR_6 ;
 TYPE_2__ VAR_7 ;
 size_t VAR_8 ;
 TYPE_2__ VAR_9 ;
 size_t VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_0 (int,scalar_t__,int ) ;
 int FUNC_1 (int,unsigned char*,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__ const*,char const*,char const*,size_t) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static int
FUNC_7(int VAR_12, const char *VAR_13, const char *VAR_14, off_t VAR_15)
{
 unsigned char VAR_16[VAR_0];
 const br_hash_class *VAR_17;
 br_hash_compat_context VAR_18;
 size_t VAR_19;
 int VAR_20;

 if (FUNC_2(VAR_14, "no_hash", 7) == 0) {
  return (VAR_2);
 } else if (FUNC_2(VAR_14, "sha256=", 7) == 0) {
  VAR_17 = &VAR_7;
  VAR_19 = VAR_6;
  VAR_14 += 7;
 } else {
  FUNC_6("%s: no supported fingerprint", VAR_13);
  return (VAR_3);
 }

 VAR_17->init(&VAR_18.vtable);
 if (VAR_15)
  FUNC_0(VAR_12, 0, VAR_1);
 do {
  VAR_20 = FUNC_1(VAR_12, VAR_16, sizeof(VAR_16));
  if (VAR_20 < 0)
   return (VAR_20);
  if (VAR_20 > 0)
   VAR_17->update(&VAR_18.vtable, VAR_16, VAR_20);
 } while (VAR_20 > 0);
 FUNC_0(VAR_12, VAR_15, VAR_1);
 return (FUNC_5(&VAR_18, VAR_17, VAR_13, VAR_14, VAR_19));
}
