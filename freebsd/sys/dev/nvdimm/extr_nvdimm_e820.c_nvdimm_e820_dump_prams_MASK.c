
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct sbuf {int dummy; } ;
typedef int device_t ;
typedef int buffer ;
struct TYPE_2__ {char const* size; scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,char*,int,int ) ;
 int FUNC_5 (struct sbuf*,char*,int,...) ;
 int VAR_3 ;
 int FUNC_6 (struct sbuf*,char) ;
 int FUNC_7 (struct sbuf*,int ,int *) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_4, const char *VAR_5, int VAR_6)
{
 char VAR_7[256];
 struct sbuf VAR_8;
 bool VAR_9 = 0;
 unsigned VAR_10;

 FUNC_4(&VAR_8, VAR_7, sizeof(VAR_7), VAR_0);
 FUNC_7(&VAR_8, VAR_3, ((void*)0));

 FUNC_5(&VAR_8, "%s: %s: ", FUNC_0(VAR_4), VAR_5);
 if (VAR_6 < 0)
  FUNC_1(&VAR_8, "Found BIOS PRAM regions: ");
 else
  FUNC_5(&VAR_8, "Remaining unallocated PRAM regions after "
      "hint %d: ", VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_2[VAR_10].size == 0)
   continue;
  if (VAR_9)
   FUNC_6(&VAR_8, ',');
  else
   VAR_9 = 1;
  FUNC_5(&VAR_8, "0x%jx-0x%jx",
      (uintmax_t)VAR_2[VAR_10].start,
      (uintmax_t)VAR_2[VAR_10].start + VAR_2[VAR_10].size
      - 1);
 }

 if (!VAR_9)
  FUNC_1(&VAR_8, "<none>");
 FUNC_6(&VAR_8, '\n');
 FUNC_3(&VAR_8);
 FUNC_2(&VAR_8);
}
