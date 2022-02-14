
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpm {int state; } ;
struct archive_read_filter {char* name; struct rpm* data; TYPE_1__* archive; int close; int * skip; int read; int code; } ;
struct TYPE_2__ {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter *VAR_7)
{
 struct rpm *VAR_8;

 VAR_7->code = VAR_1;
 VAR_7->name = "rpm";
 VAR_7->read = VAR_6;
 VAR_7->skip = ((void*)0);
 VAR_7->close = VAR_5;

 VAR_8 = (struct rpm *)FUNC_1(sizeof(*VAR_8), 1);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(&VAR_7->archive->archive, VAR_3,
      "Can't allocate data for rpm");
  return (VAR_0);
 }

 VAR_7->data = VAR_8;
 VAR_8->state = VAR_4;

 return (VAR_2);
}
