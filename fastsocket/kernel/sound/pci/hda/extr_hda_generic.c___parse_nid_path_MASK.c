
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int* path; size_t depth; int* idx; int* multi; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int const) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int const) ;
 int FUNC_3 (struct hda_codec*,int,int const**) ;

__attribute__((used)) static bool FUNC_4(struct hda_codec *VAR_5,
        hda_nid_t VAR_6, hda_nid_t VAR_7,
        int VAR_8, struct nid_path *VAR_9,
        int VAR_10)
{
 const hda_nid_t *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_7 == VAR_8)
  VAR_8 = 0;
 else if (VAR_7 == (hda_nid_t)(-VAR_8))
  return 0;

 VAR_13 = FUNC_3(VAR_5, VAR_7, &VAR_11);
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  if (VAR_11[VAR_12] != VAR_6) {



   if (VAR_6 ||
       FUNC_1(FUNC_0(VAR_5, VAR_11[VAR_12])) != VAR_2 ||
       FUNC_2(VAR_5, VAR_11[VAR_12]))
    continue;
  }

  if (VAR_8 <= 0)
   goto found;
 }
 if (VAR_10 >= VAR_4)
  return 0;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  unsigned int VAR_14;
  VAR_14 = FUNC_1(FUNC_0(VAR_5, VAR_11[VAR_12]));
  if (VAR_14 == VAR_2 || VAR_14 == VAR_0 ||
      VAR_14 == VAR_3)
   continue;
  if (FUNC_4(VAR_5, VAR_6, VAR_11[VAR_12],
         VAR_8, VAR_9, VAR_10 + 1))
   goto found;
 }
 return 0;

 found:
 VAR_9->path[VAR_9->depth] = VAR_11[VAR_12];
 VAR_9->idx[VAR_9->depth + 1] = VAR_12;
 if (VAR_13 > 1 && FUNC_1(FUNC_0(VAR_5, VAR_7)) != VAR_1)
  VAR_9->multi[VAR_9->depth + 1] = 1;
 VAR_9->depth++;
 return 1;
}
