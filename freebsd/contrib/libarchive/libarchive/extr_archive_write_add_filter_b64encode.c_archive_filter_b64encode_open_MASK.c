
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s; } ;
struct private_b64encode {size_t bs; TYPE_1__ name; int mode; int encoded_buff; } ;
struct archive_write_filter {struct private_b64encode* data; TYPE_2__* archive; int next_filter; } ;
struct TYPE_5__ {scalar_t__ magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 size_t FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(struct archive_write_filter *VAR_4)
{
 struct private_b64encode *VAR_5 = (struct private_b64encode *)VAR_4->data;
 size_t VAR_6 = 65536, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4->next_filter);
 if (VAR_8 != VAR_1)
  return (VAR_8);

 if (VAR_4->archive->magic == VAR_2) {


  VAR_7 = FUNC_4(VAR_4->archive);
  if (VAR_7 > VAR_6)
   VAR_6 = VAR_7;
  else if (VAR_7 != 0)
   VAR_6 -= VAR_6 % VAR_7;
 }

 VAR_5->bs = VAR_6;
 if (FUNC_2(&VAR_5->encoded_buff, VAR_6 + 512) == ((void*)0)) {
  FUNC_1(VAR_4->archive, VAR_3,
      "Can't allocate data for b64encode buffer");
  return (VAR_0);
 }

 FUNC_3(&VAR_5->encoded_buff, "begin-base64 %o %s\n",
     VAR_5->mode, VAR_5->name.s);

 VAR_4->data = VAR_5;
 return (0);
}
