
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileblocks {size_t filesize; struct fileblock* last; struct fileblock* first; } ;
struct fileblock {int size; struct fileblock* next; scalar_t__ buff; int gap_size; } ;
struct archive {int dummy; } ;
typedef long ssize_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;
 int FUNC_2 (struct fileblock*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_3(struct archive *VAR_2, void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct fileblocks *VAR_6 = VAR_3;
 struct fileblock *VAR_7;

 (void)VAR_2;

 if ((const char *)VAR_0 <= (const char *)VAR_4
     && (const char *)VAR_4 < (const char *)VAR_0 + VAR_1) {

  VAR_6->last->gap_size += (int64_t)VAR_5;
 } else {


  VAR_7 = (struct fileblock *)FUNC_0(sizeof(*VAR_7));
  FUNC_2(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->size = (int)VAR_5;
  VAR_7->buff = FUNC_0(VAR_5);
  FUNC_1(VAR_7->buff, VAR_4, VAR_5);
  if (VAR_6->last == ((void*)0)) {
   VAR_6->first = VAR_6->last = VAR_7;
  } else {
   VAR_6->last->next = VAR_7;
   VAR_6->last = VAR_7;
  }
  VAR_7->next = ((void*)0);
 }
 VAR_6->filesize += VAR_5;
 return ((long)VAR_5);
}
