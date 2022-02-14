
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_eli_metadata {int md_flags; } ;
typedef int md ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_1 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_2 (struct g_eli_metadata*,int) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct gctl_req *VAR_6, const char *VAR_7, int VAR_8,
    int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct g_eli_metadata VAR_13;
 bool VAR_14 = 0;

 if (FUNC_0(VAR_6, VAR_7, &VAR_13) == -1)
  return;

 if (VAR_8 == 1 && (VAR_13.md_flags & VAR_1)) {
  if (VAR_5)
   FUNC_3("BOOT flag already configured for %s.\n", VAR_7);
 } else if (VAR_8 == 0 && !(VAR_13.md_flags & VAR_1)) {
  if (VAR_5)
   FUNC_3("BOOT flag not configured for %s.\n", VAR_7);
 } else if (VAR_8 >= 0) {
  if (VAR_8)
   VAR_13.md_flags |= VAR_1;
  else
   VAR_13.md_flags &= ~VAR_1;
  VAR_14 = 1;
 }

 if (VAR_9 == 1 && (VAR_13.md_flags & VAR_2)) {
  if (VAR_5)
   FUNC_3("GELIBOOT flag already configured for %s.\n", VAR_7);
 } else if (VAR_9 == 0 && !(VAR_13.md_flags & VAR_2)) {
  if (VAR_5)
   FUNC_3("GELIBOOT flag not configured for %s.\n", VAR_7);
 } else if (VAR_9 >= 0) {
  if (VAR_9)
   VAR_13.md_flags |= VAR_2;
  else
   VAR_13.md_flags &= ~VAR_2;
  VAR_14 = 1;
 }

 if (VAR_10 == 1 && (VAR_13.md_flags & VAR_3)) {
  if (VAR_5)
   FUNC_3("GELIDISPLAYPASS flag already configured for %s.\n", VAR_7);
 } else if (VAR_10 == 0 &&
     !(VAR_13.md_flags & VAR_3)) {
  if (VAR_5)
   FUNC_3("GELIDISPLAYPASS flag not configured for %s.\n", VAR_7);
 } else if (VAR_10 >= 0) {
  if (VAR_10)
   VAR_13.md_flags |= VAR_3;
  else
   VAR_13.md_flags &= ~VAR_3;
  VAR_14 = 1;
 }

 if (VAR_11 == 0 && (VAR_13.md_flags & VAR_4)) {
  if (VAR_5)
   FUNC_3("TRIM disable flag already configured for %s.\n", VAR_7);
 } else if (VAR_11 == 1 && !(VAR_13.md_flags & VAR_4)) {
  if (VAR_5)
   FUNC_3("TRIM disable flag not configured for %s.\n", VAR_7);
 } else if (VAR_11 >= 0) {
  if (VAR_11)
   VAR_13.md_flags &= ~VAR_4;
  else
   VAR_13.md_flags |= VAR_4;
  VAR_14 = 1;
 }

 if (VAR_12 == 1 && (VAR_13.md_flags & VAR_0)) {
  if (VAR_5)
   FUNC_3("AUTORESIZE flag already configured for %s.\n", VAR_7);
 } else if (VAR_12 == 0 && !(VAR_13.md_flags & VAR_0)) {
  if (VAR_5)
   FUNC_3("AUTORESIZE flag not configured for %s.\n", VAR_7);
 } else if (VAR_12 >= 0) {
  if (VAR_12)
   VAR_13.md_flags |= VAR_0;
  else
   VAR_13.md_flags &= ~VAR_0;
  VAR_14 = 1;
 }

 if (VAR_14)
  FUNC_1(VAR_6, VAR_7, &VAR_13);
 FUNC_2(&VAR_13, sizeof(VAR_13));
}
