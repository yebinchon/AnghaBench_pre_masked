
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {unsigned int* ctls; } ;
struct hda_codec {int spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int,char const*,int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_4, const char *VAR_5, int VAR_6,
        unsigned int VAR_7, struct nid_path *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10 = VAR_1;

 if (!VAR_8)
  return 0;
 VAR_9 = VAR_8->ctls[VAR_3];
 if (!VAR_9)
  return 0;
 VAR_9 = FUNC_1(VAR_9, VAR_7);
 if (FUNC_2(VAR_9) == VAR_2) {
  hda_nid_t VAR_11 = FUNC_3(VAR_9);
  int VAR_12 = FUNC_4(VAR_4, VAR_11);
  if (VAR_12 > 1) {
   VAR_10 = VAR_0;
   VAR_9 |= VAR_12 << 19;
  }
 }
 return FUNC_0(VAR_4->spec, VAR_10, VAR_5, VAR_6, VAR_9);
}
