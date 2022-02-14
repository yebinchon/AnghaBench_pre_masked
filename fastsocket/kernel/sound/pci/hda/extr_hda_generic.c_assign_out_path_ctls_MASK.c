
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {unsigned int* ctls; } ;
struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct hda_codec*,unsigned int,size_t) ;
 scalar_t__ FUNC_4 (struct hda_codec*,struct nid_path*) ;
 scalar_t__ FUNC_5 (struct hda_codec*,struct nid_path*) ;
 scalar_t__ FUNC_6 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_7, struct nid_path *VAR_8)
{
 hda_nid_t VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;

 if (!VAR_8)
  return VAR_2 * 2;

 if (VAR_8->ctls[VAR_6] ||
     VAR_8->ctls[VAR_5])
  return 0;

 VAR_9 = FUNC_5(VAR_7, VAR_8);
 if (VAR_9) {
  VAR_10 = FUNC_0(VAR_9, 3, 0, VAR_4);
  if (FUNC_3(VAR_7, VAR_10, VAR_6))
   VAR_11 += VAR_2;
  else
   VAR_8->ctls[VAR_6] = VAR_10;
 } else
  VAR_11 += VAR_2;
 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (VAR_9) {
  unsigned int VAR_12 = FUNC_2(FUNC_1(VAR_7, VAR_9));
  if (VAR_12 == VAR_1 || VAR_12 == VAR_0 ||
      FUNC_6(VAR_7, VAR_9, VAR_4))
   VAR_10 = FUNC_0(VAR_9, 3, 0, VAR_4);
  else
   VAR_10 = FUNC_0(VAR_9, 3, 0, VAR_3);
  if (FUNC_3(VAR_7, VAR_10, VAR_5))
   VAR_11 += VAR_2;
  else
   VAR_8->ctls[VAR_5] = VAR_10;
 } else
  VAR_11 += VAR_2;
 return VAR_11;
}
