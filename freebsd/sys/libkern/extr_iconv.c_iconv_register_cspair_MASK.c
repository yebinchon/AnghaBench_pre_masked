
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_cspair {char* cp_to; char* cp_from; void* cp_data; struct iconv_converter_class* cp_dcp; scalar_t__ cp_id; } ;
struct iconv_converter_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct iconv_cspair*,int ) ;
 int FUNC_1 (struct iconv_cspair*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char const*,char const*,int *) ;
 void* VAR_6 ;
 struct iconv_cspair* FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,void*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_7, const char *VAR_8,
 struct iconv_converter_class *VAR_9, void *VAR_10,
 struct iconv_cspair **VAR_11)
{
 struct iconv_cspair *VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (FUNC_2(VAR_7, VAR_8, ((void*)0)) == 0)
  return VAR_0;
 VAR_14 = sizeof(*VAR_12);
 VAR_15 = FUNC_4(VAR_7, VAR_6) == 0;
 if (!VAR_15)
  VAR_14 += FUNC_6(VAR_7) + 1;
 VAR_16 = FUNC_4(VAR_8, VAR_6) == 0;
 if (!VAR_16)
  VAR_14 += FUNC_6(VAR_8) + 1;
 VAR_12 = FUNC_3(VAR_14, VAR_1, VAR_2);
 FUNC_1(VAR_12, VAR_14);
 VAR_12->cp_id = VAR_4++;
 VAR_12->cp_dcp = VAR_9;
 VAR_13 = (char*)(VAR_12 + 1);
 if (!VAR_15) {
  FUNC_5(VAR_13, VAR_7);
  VAR_12->cp_to = VAR_13;
  VAR_13 += FUNC_6(VAR_13) + 1;
 } else
  VAR_12->cp_to = VAR_6;
 if (!VAR_16) {
  FUNC_5(VAR_13, VAR_8);
  VAR_12->cp_from = VAR_13;
 } else
  VAR_12->cp_from = VAR_6;
 VAR_12->cp_data = VAR_10;

 FUNC_0(&VAR_5, VAR_12, VAR_3);
 *VAR_11 = VAR_12;
 return 0;
}
