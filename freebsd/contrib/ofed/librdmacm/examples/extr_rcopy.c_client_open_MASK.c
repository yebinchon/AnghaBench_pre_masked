
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct stat {scalar_t__ st_mode; scalar_t__ st_size; } ;
struct TYPE_2__ {int len; int data; int command; } ;
struct msg_open {TYPE_1__ hdr; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct msg_open* FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 void* VAR_8 ;
 int FUNC_3 (struct msg_open*) ;
 int FUNC_4 (scalar_t__,struct stat*) ;
 void* FUNC_5 (int *,scalar_t__,int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int,TYPE_1__*,int ) ;
 int FUNC_7 (void*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,struct msg_open*,int,int ) ;
 int VAR_9 ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(int VAR_10)
{
 struct msg_open *VAR_11;
 struct stat VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 FUNC_9("opening...");
 FUNC_2(((void*)0));
 VAR_7 = FUNC_8(VAR_9, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_14 = FUNC_4(VAR_7, &VAR_12);
 if (VAR_14 < 0)
  goto err1;

 VAR_4 = (uint64_t) VAR_12.st_size;
 VAR_8 = FUNC_5(((void*)0), VAR_4, VAR_3, VAR_1, VAR_7, 0);
 if (VAR_8 == (void *) -1) {
  VAR_14 = VAR_6;
  goto err1;
 }

 VAR_13 = (((uint32_t) FUNC_12(VAR_5)) + 8) & 0xFFFFFFF8;
 VAR_11 = FUNC_0(1, sizeof(*VAR_11) + VAR_13);
 if (!VAR_11) {
  VAR_14 = -1;
  goto err2;
 }

 VAR_11->hdr.command = VAR_0;
 VAR_11->hdr.len = sizeof(*VAR_11) + VAR_13;
 VAR_11->hdr.data = (uint32_t) VAR_12.st_mode;
 FUNC_11(VAR_11->path, VAR_5);
 VAR_14 = FUNC_10(VAR_10, VAR_11, VAR_11->hdr.len, 0);
 if (VAR_14 != VAR_11->hdr.len)
  goto err3;

 VAR_14 = FUNC_6(VAR_10, &VAR_11->hdr, VAR_0);
 if (VAR_14)
  goto err3;

 return 0;

err3:
 FUNC_3(VAR_11);
err2:
 FUNC_7(VAR_8, VAR_4);
err1:
 FUNC_1(VAR_7);
 return VAR_14;
}
