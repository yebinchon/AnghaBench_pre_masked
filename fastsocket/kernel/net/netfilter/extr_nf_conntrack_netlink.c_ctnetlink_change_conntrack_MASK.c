
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conn {int mark; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_1 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_2 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_3 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_4 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_5 (struct nlattr const* const) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct nf_conn *VAR_11,
      const struct nlattr * const VAR_12[])
{
 int VAR_13;


 if (VAR_12[VAR_5] || VAR_12[VAR_2] || VAR_12[VAR_9])
  return -VAR_10;

 if (VAR_12[VAR_0]) {
  VAR_13 = FUNC_0(VAR_11, VAR_12);
  if (VAR_13 < 0)
   return VAR_13;
 }

 if (VAR_12[VAR_8]) {
  VAR_13 = FUNC_4(VAR_11, VAR_12);
  if (VAR_13 < 0)
   return VAR_13;
 }

 if (VAR_12[VAR_7]) {
  VAR_13 = FUNC_3(VAR_11, VAR_12);
  if (VAR_13 < 0)
   return VAR_13;
 }

 if (VAR_12[VAR_6]) {
  VAR_13 = FUNC_2(VAR_11, VAR_12);
  if (VAR_13 < 0)
   return VAR_13;
 }
 return 0;
}
