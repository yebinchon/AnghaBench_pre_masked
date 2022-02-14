
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct ip_set {int * variant; } ;
struct bitmap_port {scalar_t__ memsize; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (struct ip_set*) ;
 int VAR_7 ;
 int FUNC_2 (struct ip_set*,struct bitmap_port*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct nlattr**,size_t) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,size_t) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct bitmap_port*) ;
 struct bitmap_port* FUNC_8 (int,int ) ;
 int FUNC_9 (char*,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct ip_set *VAR_8, struct nlattr *VAR_9[],
   u32 VAR_10)
{
 struct bitmap_port *VAR_11;
 u16 VAR_12, VAR_13;

 if (FUNC_10(!FUNC_3(VAR_9, VAR_2) ||
       !FUNC_3(VAR_9, VAR_3) ||
       !FUNC_5(VAR_9, VAR_4)))
  return -VAR_5;

 VAR_12 = FUNC_4(VAR_9[VAR_2]);
 VAR_13 = FUNC_4(VAR_9[VAR_3]);
 if (VAR_12 > VAR_13) {
  u16 VAR_14 = VAR_12;

  VAR_12 = VAR_13;
  VAR_13 = VAR_14;
 }

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 if (VAR_9[VAR_4]) {
  VAR_11->memsize = (VAR_13 - VAR_12 + 1)
          * sizeof(unsigned long);

  if (!FUNC_2(VAR_8, VAR_11, VAR_12, VAR_13)) {
   FUNC_7(VAR_11);
   return -VAR_0;
  }

  VAR_11->timeout = FUNC_6(VAR_9[VAR_4]);
  VAR_8->variant = &VAR_7;

  FUNC_1(VAR_8);
 } else {
  VAR_11->memsize = FUNC_0(0, VAR_13 - VAR_12);
  FUNC_9("memsize: %zu\n", VAR_11->memsize);
  if (!FUNC_2(VAR_8, VAR_11, VAR_12, VAR_13)) {
   FUNC_7(VAR_11);
   return -VAR_0;
  }

  VAR_8->variant = &VAR_6;
 }
 return 0;
}
