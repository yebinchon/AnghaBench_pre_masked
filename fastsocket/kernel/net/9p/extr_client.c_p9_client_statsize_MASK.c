
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_wstat {scalar_t__ extension; scalar_t__ muid; scalar_t__ gid; scalar_t__ uid; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct p9_wstat *VAR_0, int VAR_1)
{
 int VAR_2;




 VAR_2 = 2+2+4+13+4+4+4+8+2+2+2+2;

 if (VAR_0->name)
  VAR_2 += FUNC_0(VAR_0->name);
 if (VAR_0->uid)
  VAR_2 += FUNC_0(VAR_0->uid);
 if (VAR_0->gid)
  VAR_2 += FUNC_0(VAR_0->gid);
 if (VAR_0->muid)
  VAR_2 += FUNC_0(VAR_0->muid);

 if (VAR_1) {
  VAR_2 += 2+4+4+4;
  if (VAR_0->extension)
   VAR_2 += FUNC_0(VAR_0->extension);
 }

 return VAR_2;
}
