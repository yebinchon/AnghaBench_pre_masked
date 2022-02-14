
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pax {int flags; int pax_header; } ;
struct archive_string {int s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,void const*,size_t) ;
 int FUNC_2 (struct archive_string*,char const*) ;
 int FUNC_3 (struct archive_string*,char*) ;
 int FUNC_4 (struct archive_string*) ;
 int FUNC_5 (struct archive_string*) ;
 char* FUNC_6 (char const*,size_t) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct pax *VAR_2, const char *VAR_3,
    const void *VAR_4, size_t VAR_5)
{
 struct archive_string VAR_6;
 char *VAR_7;

 if (VAR_2->flags & VAR_0) {
  VAR_7 = FUNC_6((const char *)VAR_4, VAR_5);

  if (VAR_3 != ((void*)0) && VAR_7 != ((void*)0)) {
   FUNC_5(&VAR_6);
   FUNC_3(&VAR_6, "LIBARCHIVE.xattr.");
   FUNC_2(&VAR_6, VAR_3);
   FUNC_0(&(VAR_2->pax_header), VAR_6.s, VAR_7);
   FUNC_4(&VAR_6);
  }
  FUNC_7(VAR_7);
 }
 if (VAR_2->flags & VAR_1) {
  FUNC_5(&VAR_6);
  FUNC_3(&VAR_6, "SCHILY.xattr.");
  FUNC_2(&VAR_6, VAR_3);
  FUNC_1(&(VAR_2->pax_header), VAR_6.s, VAR_4, VAR_5);
  FUNC_4(&VAR_6);
 }
}
