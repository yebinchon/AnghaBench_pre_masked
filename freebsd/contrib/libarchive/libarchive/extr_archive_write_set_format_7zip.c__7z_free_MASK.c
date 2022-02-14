
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_write {int archive; scalar_t__ format_data; } ;
struct TYPE_2__ {struct _7zip* props; } ;
struct _7zip {scalar_t__ temp_fd; TYPE_1__ coder; int stream; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct _7zip*) ;
 int FUNC_3 (struct _7zip*) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_1)
{
 struct _7zip *VAR_2 = (struct _7zip *)VAR_1->format_data;


 if (VAR_2->temp_fd >= 0)
  FUNC_0(VAR_2->temp_fd);

 FUNC_2(VAR_2);
 FUNC_1(&(VAR_1->archive), &(VAR_2->stream));
 FUNC_3(VAR_2->coder.props);
 FUNC_3(VAR_2);

 return (VAR_0);
}
