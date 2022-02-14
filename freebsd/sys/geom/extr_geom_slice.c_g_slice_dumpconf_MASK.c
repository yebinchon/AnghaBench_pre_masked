
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct sbuf {int dummy; } ;
struct g_slicer {TYPE_1__* slices; } ;
struct g_provider {size_t index; } ;
struct g_geom {struct g_slicer* softc; } ;
struct g_consumer {int dummy; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ length; } ;


 int FUNC_0 (struct sbuf*,char*,...) ;

void
FUNC_1(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2, struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_slicer *VAR_5;

 VAR_5 = VAR_2->softc;
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, " i %u", VAR_4->index);
  FUNC_0(VAR_0, " o %ju",
      (uintmax_t)VAR_5->slices[VAR_4->index].offset);
  return;
 }
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_0, "%s<index>%u</index>\n", VAR_1, VAR_4->index);
  FUNC_0(VAR_0, "%s<length>%ju</length>\n",
      VAR_1, (uintmax_t)VAR_5->slices[VAR_4->index].length);
  FUNC_0(VAR_0, "%s<seclength>%ju</seclength>\n", VAR_1,
      (uintmax_t)VAR_5->slices[VAR_4->index].length / 512);
  FUNC_0(VAR_0, "%s<offset>%ju</offset>\n", VAR_1,
      (uintmax_t)VAR_5->slices[VAR_4->index].offset);
  FUNC_0(VAR_0, "%s<secoffset>%ju</secoffset>\n", VAR_1,
      (uintmax_t)VAR_5->slices[VAR_4->index].offset / 512);
 }
}
