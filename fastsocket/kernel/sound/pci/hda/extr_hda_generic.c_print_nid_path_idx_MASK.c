
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (char const*,struct nid_path*) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static inline void FUNC_2(struct hda_codec *VAR_0,
          const char *VAR_1, int VAR_2)
{
 struct nid_path *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_3);
}
